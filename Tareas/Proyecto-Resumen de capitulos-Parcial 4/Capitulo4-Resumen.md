## *Resumen del capitulo 4 de CUDA*
#### *Hecho por Armin Posadas Flores*

### Capitulo 4: Localidad de memoria y datos.

### 4.1 La introduccion
Esta sección presenta el concepto de memoria y localidad de datos en la programación CUDA. Explica la importancia de 
comprender los diferentes tipos de memoria y cómo pueden afectar el rendimiento de los programas paralelos.

### 4.2 Tipos de memoria de CUDA
CUDA admite varios tipos de memoria, cada uno con características distintas:
- **Registros**: Rápido pero de capacidad limitada, utilizado para variables escalares automáticas.
- **Memoria local**: Se utiliza para variables de matriz automáticas, más lenta que los registros.
- **Memoria compartida**: Accesible para todos los subprocesos de un bloque, útil para compartir datos colaborativos 
entre subprocesos.
- **Memoria global**: Accesible para todos los subprocesos en todas las cuadrículas, pero con mayor latencia.
- **Memoria constante**: acceso rápido a datos de solo lectura compartidos por todos los subprocesos, con una limitación 
de tamaño.

### 4.3 Calificadores variables
Esta sección detalla la sintaxis para declarar variables en CUDA:
- **__device__**: Para variables globales.
- **__shared__**: Para variables de memoria compartida dentro de un bloque de subprocesos.
- **__constant__**: Para variables constantes disponibles para todas las grillas.

### 4.4 Ejemplo de multiplicación de matrices
Se proporciona un ejemplo para ilustrar el uso de la memoria compartida para optimizar la multiplicación de matrices. 
El ejemplo muestra cómo dividir los datos en fragmentos más pequeños y utilizar memoria compartida puede mejorar 
significativamente el rendimiento.

### 4.5 El modelo de Von Neumann
Se analiza el modelo de von Neumann como modelo fundamental para las computadoras modernas. Explica cómo se almacenan 
los programas y los datos en la memoria y cómo la unidad de control recupera y ejecuta instrucciones.

### 4.6 Unidades de procesamiento e hilos
Esta sección cubre la implementación de subprocesos en procesadores modernos, incluido el cambio de contexto y el uso de 
múltiples unidades de procesamiento para permitir el progreso simultáneo de múltiples subprocesos.

### 4.7 Patrones de acceso a la memoria
Explica la importancia de patrones eficientes de acceso a la memoria para maximizar el rendimiento de los programas CUDA. 
El acceso a la memoria compartida es mucho más rápido que la memoria global, por lo que optimizar el acceso a los datos 
puede generar mejoras significativas en el rendimiento.