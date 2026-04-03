## ¿Por qué es conveniente incluirlo?

Es conveniente porque evita subir archivos innecesarios o temporales, manteniendo el repositorio limpio y organizado.

## ¿Cuándo se debe hacer?

Se recomienda crearlo al inicio del proyecto, aunque puede agregarse en cualquier momento.

## ¿Cómo se configura?

Se crea un archivo llamado .gitignore y se agregan los nombres de los archivos o patrones que se desean ignorar.


## Sobre el código sin funcionar:

_ Linea 17 y 23 error de sintaxos por falta de ";"

_ Linea 12 error de sintaxis por falta de "&"

_ No estaba incluida la biblioteca stdio.h

_ En la llamada a la funcion falta el "&" para pasar la direccion del valor

_ La funcion duplicar_numero necesita el valor por referencia para poder guardar el nuevo valor del numero y mostrarlo correctamente

## Sobre el código misterioso:

- La función f_alpha fue renombrada a invertirNumero, ya que su propósito es invertir los dígitos del número recibido
Además, el parámetro p fue renombrado a ref_num porque representa la referencia de la variable
La variable rev fue renombrada a num_invertido, ya que almacena el número invertido.

- La función f_beta fue renombrada a divideEnDos, debido a que divide entre dos el valor recibido por referencia

- La función f_gamma fue renombrada a sumaDigitos, ya que calcula la suma de los dígitos del número recibido y luego se la suma al mismo
La variable suma fue renombrada a suma_dig para reflejar mejor su propósito.

- La función procesar_enigma ejecuta en orden las funciones anteriores, aplicando una serie de transformaciones sobre el valor recibido por referencia