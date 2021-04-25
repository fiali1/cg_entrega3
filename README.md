# Mini Earth
Modelo 3D do planeta Terra e sua Lua. Permite movimentação e rotação da câmera com o mouse e permite exibir diferentes modos de visualização.

O modelo pode ser visualizado <a href="https://fiali1.github.io/cg_entrega3/miniEarth/">aqui</a>. (Observação: utiliza um arquivo .data relativamente grande (70MB), então pode levar alguns instantes para carregar).

Notas:
* Houveram dificuldades na manipulação dos objetos e texturas, particularmente quanto à implementação da Lua. Os modelos obtidos não forneciam um normal map, então foi necessário buscar de outras fontes pares de texturas difusa e normal e definir o mapeamento esférico como padrão (uma vez que o mapeamento por mesh resultava em uma exibição incorreta, pela textura não ser compatível com a fonte). O processo teve êxito com o modelo da Terra, porém o modelo da Lua apresentou problemas de exibição, possivelmente por conta de scaling, resultando numa textura borrada.

Participantes
* Gabriel de Mello Fiali - 11201721286
* Rodrigo Rominho Mayer - 11020716

<hr></hr>

### ABCg
Development framework accompanying the course [MCTA008-17 Computer Graphics](http://professor.ufabc.edu.br/~harlen.batagelo/cg/) at [UFABC](https://www.ufabc.edu.br/).

<b>Author</b>

Harlen Batagelo

<b>License</b>

MIT
