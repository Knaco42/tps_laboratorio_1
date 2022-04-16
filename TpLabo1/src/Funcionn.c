




#include <stdio.h>
#include <ctype.h>
#include "Calculos.h"

void SubMenu(void)
{
	int opcion;
	int opcionUno;
	int opcionAerolineas;
	int opcionLatam;
	int seguir;

	do
	{
		printf("1. Ingresar Kilometros: \n");
		printf("2. Ingresar Precios de Vuelos: \n");
		printf("3. Calcular todos los costos: \n");
		printf("4. Informar Resultados\n");
		printf("5. Carga forzada de datos \n");
		printf("6. Salir\n");
		scanf("%d", &opcion);

		switch(opcion)
		{
			case 1:
				opcionUno = IngresarKilometros(opcionUno);
				printf("Los kilometros ingresados son: %d KM\n\n",opcionUno);
			break;
			case 2:
				opcionAerolineas = IngresarPrecioVuelosAerolineas(opcionAerolineas);
				opcionLatam = IngresarPrecioVuelosLatam(opcionLatam);
				printf("El precio de Aerolineas es: $%d\n\n",opcionAerolineas);
				printf("El precio de Latam es: $%d\n\n",opcionLatam);
			break;
			case 3:
				CalcularPreciosAerolineas(opcionUno, opcionAerolineas);
				CalcularPreciosLatam(opcionUno, opcionLatam);
			break;
			case 4:
				printf("Los kilometros ingresados son: %d KM\n\n",opcionUno);
				printf("El precio de Aerolineas es: $%d\n",opcionAerolineas);
				CalcularPreciosAerolineas(opcionUno, opcionAerolineas);
				printf("El precio de Latam es: $%d\n",opcionLatam);
				CalcularPreciosLatam(opcionUno, opcionLatam);
				CalcularDiferenciaDePrecio(opcionLatam, opcionAerolineas);
			break;
			case 5:
				CargarDatosForzados();
			break;
			case 6:
				printf("Aplicacion cerrada con exito...");
				seguir = 6;
			break;
			default:
				printf("ERROR...opcion no valida\n");
			break;
		}


	}while(seguir != 6);



}
int IngresarKilometros(int kilometros)
{
	printf("Ingresar Kilometros: \n");
	scanf("%d",&kilometros);
	while(kilometros<0)
	{
		printf("Por favor...Ingrese una cantidad de Kilometros valida: \n");
		scanf("%d",&kilometros);
	}

	return kilometros;
}
int IngresarPrecioVuelosAerolineas(int precioAerolineas)
{

	printf("Ingresar Precio de Vuelo Aerolineas: \n");
	scanf("%d",&precioAerolineas);

	return precioAerolineas;

}
int IngresarPrecioVuelosLatam(int precioLatam)
{

	printf("Ingresar Precio de Vuelo Latam: \n");
	scanf("%d",&precioLatam);

	return precioLatam;

}
void CalcularPreciosAerolineas(int IngresarKilometros, int IngresarPrecioVuelosAerolineas)
{
	if(IngresarKilometros < 1 || IngresarPrecioVuelosAerolineas <1)
	{
		printf("\nNo hay suficientes datos para calcular precios de Aerolineas,\npor favor reingrese los datos: \n\n");
	}
	else
	{
		float tarjetaDebitoDescuento;
		float tarjetaCreditoInteres;
		float precioBitcoin;
		float precioUnitarioPorKM;

		tarjetaDebitoDescuento = IngresarPrecioVuelosAerolineas * 0.90;
		tarjetaCreditoInteres = IngresarPrecioVuelosAerolineas * 1.25;
		precioBitcoin = IngresarPrecioVuelosAerolineas / 4606954.55;
		precioUnitarioPorKM = (float)IngresarPrecioVuelosAerolineas / IngresarKilometros;

		printf("a) El precio del vuelo Aerolineas con tarjeta de debito es : $%.2f \n",tarjetaDebitoDescuento);
		printf("b) El precio del vuelo Aerolineas con tarjeta de credito es : $%.2f \n",tarjetaCreditoInteres);
		printf("c) El precio del vuelo Aerolineas con BITCOIN es de : %f BTC\n",precioBitcoin);
		printf("d) El precio unitario del vuelo de Aerolineas es : $%.2f \n\n",precioUnitarioPorKM);
	}

}
void CalcularPreciosLatam(int IngresarKilometros, int IngresarPrecioVuelosLatam)
{
	if(IngresarKilometros < 1 || IngresarPrecioVuelosLatam <1)
	{
		printf("No hay suficientes datos para calcular precios de Latam,\npor favor reingrese los datos: \n\n");
	}
	else
	{
		float tarjetaDebitoDescuento;
		float tarjetaCreditoInteres;
		float precioBitcoin;
		float precioUnitarioPorKM;

		tarjetaDebitoDescuento = IngresarPrecioVuelosLatam * 0.90;
		tarjetaCreditoInteres = IngresarPrecioVuelosLatam * 1.25;
		precioBitcoin = IngresarPrecioVuelosLatam / 4606954.55;
		precioUnitarioPorKM = (float)IngresarPrecioVuelosLatam / IngresarKilometros;

		printf("a) El precio del vuelo Latam con tarjeta de debito es : $%.2f \n",tarjetaDebitoDescuento);
		printf("b) El precio del vuelo Latam con tarjeta de credito es : $%.2f \n",tarjetaCreditoInteres);
		printf("c) El precio del vuelo Latam con BITCOIN es de : %f BTC\n",precioBitcoin);
		printf("d) El precio unitario del vuelo de Latam es : $%.2f \n\n",precioUnitarioPorKM);
	}

}
int CalcularDiferenciaDePrecio(int IngresarPrecioVuelosLatam, int IngresarPrecioVuelosAerolineas)
{
	int diferenciaPrecio;

	if(IngresarPrecioVuelosAerolineas < 1 || IngresarPrecioVuelosLatam <1)
	{
		printf("No hay suficientes datos para calcular la diferencia de precio,\npor favor reingrese los datos : \n\n");
	}
	else
	{
		if(IngresarPrecioVuelosAerolineas>IngresarPrecioVuelosLatam)
		{
			diferenciaPrecio = IngresarPrecioVuelosAerolineas - IngresarPrecioVuelosLatam;
			printf("La diferencia de precio es : $%d\n\n",diferenciaPrecio);
		}
		else
		{
			diferenciaPrecio = IngresarPrecioVuelosLatam - IngresarPrecioVuelosAerolineas;
			printf("La diferencia de precio es : $%d\n\n",diferenciaPrecio);
		}
	}

	return diferenciaPrecio;
}
void CargarDatosForzados()
{
	int kmIngresados = 7090;
	int precioAerolineas = 162965;
	int precioLatam = 159339;

	printf("KM Ingresados : %d km\n\n",kmIngresados);
	printf("Precio Aerolineas : $%d\n",precioAerolineas);
	CalcularPreciosAerolineas(7090, 162965);
	printf("Precio Latam : $%d\n",precioLatam);
	CalcularPreciosLatam(7090, 159339);
	CalcularDiferenciaDePrecio(162965, 159339);
}
