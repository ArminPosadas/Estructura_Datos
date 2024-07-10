/*Creado por Armin Posadas Flores*/

# **Resumen del capitulo 1 de CUDA**

```
1.1 Computación paralela heterogénea

-Contexto histórico: Los microprocesadores como Intel Pentium y AMD Opteron impulsaron aumentos de rendimiento 
durante décadas, aportando una importante potencia computacional a las computadoras de escritorio y los centros de datos.

-Cambio en la informática: desde 2003, los problemas con el consumo de energía y la disipación de calor han hecho que 
la industria pase de aumentar las velocidades de reloj a utilizar múltiples núcleos en los procesadores.

-Revolución de la concurrencia: la necesidad de programación paralela ha aumentado a medida que el software ya no puede 
depender de programas secuenciales que se ejecutan más rápido con cada nueva generación de procesador.

-Multinúcleo frente a muchos subprocesos: las CPU modernas están diseñadas para el rendimiento de programas secuenciales, 
mientras que las GPU están optimizadas para la ejecución paralela con muchos subprocesos, lo que genera diferencias 
significativas en su diseño y aplicación.
```

```
1.2 Arquitectura de una GPU moderna

-Filosofía de diseño: las CPU apuntan a la ejecución de baja latencia de subprocesos únicos, mientras que las GPU se 
centran en un alto rendimiento con muchos subprocesos paralelos.

-Hardware de GPU: las GPU modernas, como la Tesla P100 de NVIDIA, tienen una gran cantidad de canales simples y ordenados 
optimizados para cálculos de punto flotante, impulsados por las necesidades de la industria de los videojuegos.

-CUDA y programación paralela: CUDA, presentada por NVIDIA, permite una programación paralela de propósito general más 
sencilla en GPU, yendo más allá de las limitaciones de la programación anterior basada en API de gráficos.
```

```
1.3 ¿Por qué más velocidad o paralelismo?

-Brecha de rendimiento: la brecha de rendimiento entre la ejecución paralela (GPU) y secuencial (CPU) es significativa, 
lo que lleva a los desarrolladores a trasladar tareas computacionalmente intensivas a las GPU.

-Presencia y accesibilidad en el mercado: las GPU tienen una gran presencia en el mercado y se utilizan en una amplia 
gama de aplicaciones, lo que las hace económicamente atractivas para los desarrolladores de software.
```

```
1.4 Acelerar aplicaciones reales

Ejecución conjunta CPU-GPU: las aplicaciones suelen utilizar tanto CPU como GPU, siendo las CPU las que manejan 
tareas secuenciales y las GPU las tareas paralelas. Modelos de programación como CUDA, OpenCL y OpenACC respaldan 
esta ejecución conjunta.
```

```
1.5 Desafíos de la programación paralela

Curva de aprendizaje: el cambio a la programación paralela requiere que los desarrolladores aprendan nuevas técnicas 
y herramientas, alejándose de los modelos tradicionales de programación secuencial.
```

```
1.6 Modelos y lenguajes de programación paralela

CUDA y más allá: CUDA ha facilitado el desarrollo de programas paralelos y han surgido otros modelos como OpenCL y 
OpenACC para admitir computación heterogénea.
```

```
1.7 Objetivos generales

Enfoque educativo: el libro tiene como objetivo educar a los desarrolladores de software sobre los principios y 
prácticas de la programación paralela para aprovechar las capacidades de las GPU modernas.
```

```
1.8 Organización del libro

Estructura: el libro está organizado para introducir gradualmente conceptos de programación paralela, arquitectura 
de GPU y aplicaciones prácticas, proporcionando una guía completa para los desarrolladores.
```

Este capítulo destaca la evolución del diseño de microprocesadores, la importancia de la programación paralela en la 
informática moderna y las herramientas y modelos disponibles para que los desarrolladores aprovechen el poder de los 
entornos informáticos heterogéneos.