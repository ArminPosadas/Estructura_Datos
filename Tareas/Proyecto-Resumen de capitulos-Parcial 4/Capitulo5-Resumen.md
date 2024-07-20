## *Resumen del capitulo 5 de CUDA*
#### *Hecho por Armin Posadas Flores*

### Capitulo 5: Consideraciones de rendimiento

#### 5.1 Ancho de banda de memoria global
El ancho de banda de la memoria global es un factor crítico en el rendimiento del kernel CUDA. Las aplicaciones CUDA 
procesan grandes cantidades de datos de la memoria global en períodos cortos. Técnicas como el mosaico (introducida en 
el Capítulo 4) ayudan a reducir los datos a los que se accede desde la memoria global mediante el uso de memoria 
compartida. Las técnicas de fusión de memoria pueden mejorar aún más la eficiencia al organizar patrones de acceso a 
datos para maximizar la utilización del ancho de banda de la memoria global. Esto implica garantizar que los subprocesos 
accedan a ubicaciones de memoria consecutivas para permitir el acceso consolidado por parte del hardware.

#### 5.2 Más sobre el paralelismo de la memoria
El paralelismo de la memoria se refiere a la capacidad de acceder a múltiples ubicaciones de memoria simultáneamente. 
Esta sección profundiza en estrategias para maximizar el paralelismo de la memoria, como optimizar la disposición de los 
accesos a la memoria para evitar cuellos de botella. El uso eficaz de la memoria compartida y la alineación adecuada de 
las estructuras de datos pueden mejorar significativamente el rendimiento de las aplicaciones CUDA al reducir la latencia 
de acceso a la memoria.

#### 5.3 Hardware Warps y SIMD
El hardware CUDA organiza los hilos en deformaciones, que se ejecutan en forma de instrucción única, datos múltiples 
(SIMD). Esta sección explica cómo comprender la ejecución de warp puede ayudar a optimizar el rendimiento. Se analiza la 
importancia de minimizar la divergencia de deformación (cuando los subprocesos en la misma deformación siguen diferentes 
rutas de ejecución) para mantener la eficiencia. Se destacan las técnicas para gestionar el flujo de control y utilizar 
primitivas de nivel warp.

#### 5.4 Partición dinámica de recursos
La partición dinámica implica la asignación dinámica de recursos informáticos (como registros y memoria compartida) en 
función de las necesidades de la aplicación. Esta sección cubre estrategias para equilibrar la asignación de recursos 
para maximizar la ocupación (la cantidad de warps activos en un multiprocesador de transmisión) y al mismo tiempo evitar 
cuellos de botella. La partición adecuada de los recursos puede conducir a una mejor utilización de la potencia 
computacional de la GPU.

#### 5.5 Granularidad del hilo
La granularidad del hilo se refiere a la cantidad de trabajo asignado a cada hilo. Esta sección analiza cómo elegir la 
granularidad adecuada para optimizar el rendimiento. Explora las compensaciones entre la cantidad de subprocesos y la 
carga de trabajo por subproceso, con el objetivo de encontrar un equilibrio que maximice la eficiencia. Se presentan 
técnicas para ajustar la granularidad del hilo según los requisitos de aplicación específicos.

#### En resumen
El capítulo proporciona información sobre varios aspectos del rendimiento de las aplicaciones en dispositivos CUDA, 
enfatizando la importancia de comprender las limitaciones del hardware y optimizar los patrones de acceso a la memoria. 
Ofrece técnicas prácticas y ejemplos para ayudar a los programadores a mejorar el rendimiento de sus aplicaciones CUDA.