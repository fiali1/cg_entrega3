#include "trackball.hpp"

#include <glm/gtc/epsilon.hpp>
#include <limits>

const auto epsilon{std::numeric_limits<float>::epsilon()};

void TrackBall::resizeViewport(int width, int height) {
  m_viewportWidth = static_cast<float>(width);
  m_viewportHeight = static_cast<float>(height);
}

glm::mat4 TrackBall::getRotation() {
  if (m_mouseTracking) return m_rotation;

  // If not tracking, rotate by velocity. This will simulate
  // an inertia-free rotation.
  auto angle{m_velocity * static_cast<float>(m_lastTime.elapsed()) * 1000.0f};

  return glm::rotate(glm::mat4(1.0f), angle, m_axis) * m_rotation;
}

glm::vec3 TrackBall::project(const glm::vec2 &position) const {
  // Convert from window coordinates to NDC
  auto v{glm::vec3(2.0f * position.x / m_viewportWidth - 1.0f,
                   1.0f - 2.0f * position.y / m_viewportHeight, 0.0f)};

  // Project to centered unit hemisphere
  auto squaredLength{glm::length2(v)};
  if (squaredLength >= 1.0f) {
    // Outside sphere
    v = glm::normalize(v);
  } else {
    // Inside sphere
    v.z = std::sqrt(1.0f - squaredLength);
  }

  return v;
}