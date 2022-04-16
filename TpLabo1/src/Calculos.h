///aca estan todos los prototipos de funciones utilizadas en el programa.

/// Lo que hace la funcion "SubMenu" es el submenu del programa.
/// En el submenu se puede ver las 6 opciones que tiene nuestro programa.
/// Están las llamadas a la funcion en cada uno de los case del switch conrrespondiente.
/// Yo lo hice utilizando el do while, que muestra el menu con cada opcion del programa hasta que el usuario
/// ingrese la opcion 6 que es de salir
/// si ingresa algun numero que no esta en las opciones, tira error y lo vuelve a pedir con el menu
/// @brief
void SubMenu(void);

///	@brief Lo que hace es pedir que el usuario ingrese los kilometros para hacer los calculos del costo de viaje
/// Int porque tiene que retornar el precio que el usuario ingrese.
/// @param Parametro de la funcion es la que va a guardar los kilometros ingresados
/// @return Int porque tiene que retornar el precio que el usuario ingrese.
int IngresarKilometros(int);

/// Si pongo una letra entra en bucle infinito
/// @brief Pide que el usuario ingrese el precio del vuelo de Aerolineas para poder hacer los calculos.
/// @param Parametro de la funcion es la que va a guardar el precio de Aerolineas, el cual ingrese el usuario
/// @return Int porque tiene que retornar el precio que el usuario ingrese.
int IngresarPrecioVuelosAerolineas(int);

/// Si pongo una letra entra en bucle infinito
/// @brief Esta funcion pide que el usuario ingrese el precio del vuelo de Latam para poder hacer los calculos.
/// @param Parametro de la funcion es la que va a guardar el precio de Latam que ingrese el usuario
/// @return Int porque tiene que retornar el precio que el usuario ingrese.
int IngresarPrecioVuelosLatam(int);

/// Si pongo una letra entra en bucle infinito
/// @brief Esta funcion calcula todos los precios AEROLINEAS de cada medio de pago, debito, credito, bitcoin y el precio por unidad.
/// Esta validado que cuando los kilometros o precio de vuelo Aerolineas es de 0 no hace los calculos y muestra
/// un printf pidiendo que reingrese los datos.
/// @param Usé de parametro la funcion de IngresarKilometros para cargar el numero que ingreso el usuario y hacer los costos
/// @param Usé de parametro la funcion de IngresarPrecioVuelosAerolineas para poder calcular los costos con el precio
/// que el usuario ingresó en Aerolineas
void CalcularPreciosAerolineas(int, int);

/// @brief Esta funcion calcula todos los precios LATAM de cada medio de pago, debito, credito, bitcoin y el precio por unidad.
/// Esta validado que cuando los kilometros o precio de vuelo LATAM es de 0 no hace los calculos y muestra
/// un printf pidiendo que reingrese los datos.
/// @param Usé de parametro la funcion de IngresarKilometros para cargar el numero que ingreso el usuario y hacer los costos
/// @param Usé de parametro la funcion de IngresarPrecioVuelosLatam para poder calcular los costos con el precio
/// que el usuario ingresó en Latam
void CalcularPreciosLatam(int, int);

/// @brief Esta funcion calcula la diferencia de precio entre Vuelos Latam y Aerolineas (x-y), y tambien esta validada
/// Cuando precio de Aerolineas o precio Latam es de 0, no hace el calculo y tira un printf pidiendo que
/// reingrese los datos correctamente.
/// Tambien esta validada para que la diferencia de precio sea correcta y no tire un numero negativo.
/// Ya que hace el numero mayor menos el numero menor (mayor - menor), lo valide con un if.
/// @param Usé de parametro la funcion IngresarPrecioVuelosLatam para hacer el calculo de diferencia de precio
/// restandole a Aerolineas o alreevez depende cual sea mayor
/// @param Usé de parametro la funcion IngresarPrecioVuelosAerolineas para hacer el calculo de diferencia de precio
/// restandole a Latam o viceversa depende cual sea mayor
/// @return Retorna el entero que esta en la variable declarada con la diferencia de precio.
int CalcularDiferenciaDePrecio(int, int);

/// @brief Esta funcion calcula todo lo anterior pero con datos harcodeados.

void CargarDatosForzados(void);
