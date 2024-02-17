# Size_t o unsigned ?


Al decidir entre usar size_t o unsigned (asumiendo que te refieres a unsigned int) en tus programas de C o C++, la elección depende de lo que pretendas representar con la variable. Cada tipo sirve para diferentes propósitos y tiene diferentes implicaciones para la portabilidad y la corrección.

## size_t

**- Propósito:** size_t está específicamente diseñado para representar el tamaño de cualquier objeto (incluidos los arrays) en bytes. Es el tipo devuelto por el operador sizeof y se utiliza en funciones de la biblioteca estándar para la asignación de memoria (malloc, calloc, realloc), manipulación de cadenas (strlen, strncpy, memcpy) y otras funciones que tratan con tamaños o conteos de elementos.

**- Portabilidad:** Está garantizado que es lo suficientemente grande como para contener el tamaño del objeto más grande posible en la plataforma objetivo. Esto lo hace particularmente adecuado para contadores de bucles e indexación de arrays cuando se trata de estructuras de datos cuyo tamaño puede variar en diferentes plataformas (por ejemplo, sistemas de 32 bits vs. 64 bits).

**- Caso de Uso:** Recomendado para cálculos de tamaño de memoria, indexación de arrays y en cualquier lugar donde necesites representar el tamaño de objetos. Usar size_t puede ayudar a hacer tu código más portátil y claro sobre su propósito.

## unsigned int

**- Propósito:** Un unsigned int es un tipo de entero de propósito general que no incluye valores negativos. Se utiliza típicamente cuando necesitas valores numéricos no negativos dentro de un rango que está garantizado por el estándar para ser de al menos 16 bits, comúnmente 32 bits en muchas plataformas.

**- Portabilidad:** El tamaño exacto de unsigned int puede variar según la implementación, aunque a menudo es de 32 bits en muchas plataformas. Esto significa que puede no ser siempre lo suficientemente grande para contener el tamaño de asignaciones de memoria o arrays en sistemas con grandes cantidades de memoria, 
especialmente en sistemas de 64 bits.

**- Caso de Uso:** Adecuado para contadores, banderas y otros valores numéricos donde se espera que el tamaño del valor no exceda los límites de un unsigned int. No está diseñado específicamente para tamaños de memoria o tamaños de objetos.

## Haciendo la Elección
**- Para Tamaños y Conteos:** Usa size_t cuando trates con tamaños (por ejemplo, de arrays, cadenas) o conteos de elementos que podrían alcanzar potencialmente el espacio direccionable máximo de la plataforma. Esto es especialmente importante para código que debe ser portátil entre arquitecturas de 32 bits y 64 bits.

**- Para Valores Numéricos Generales:** Usa unsigned int para valores numéricos generales donde estés seguro de que el rango de valor no excederá sus límites, y el valor no está representando un tamaño de memoria o conteo de elementos.

## Resumen

Elige size_t para tamaños y conteos relacionados con la memoria para asegurar la portabilidad y la corrección en diferentes plataformas.

Usa unsigned int para valores numéricos dentro de su rango, especialmente cuando esos valores no están relacionados con tamaños de memoria o conteos de objetos
