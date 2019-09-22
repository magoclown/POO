#include <iostream>
using namespace std;

enum VehicleBrands {
	Honda,
	Mazda,
	Nissan,
	Volkswagen,
	Toyota,
	Ford
};

enum TransitoEx {
	Trafico = 1000,
	Antialcoholica,
	Clima,
	Choque = 2000,
	Bache,
	LlantaPonchada,
	Licencia,
	FalloFrenos = 5000,
	Levanton,
	Bateria,
	Gasolina
};
struct TransitoExDef {
	TransitoEx codigo;
	char descripcion[_MAX_PATH];
	TransitoExDef() {}

	TransitoExDef(int codigo, char descripcion[_MAX_PATH]) {
		this->codigo = (TransitoEx)codigo;
		strcpy_s(this->descripcion, descripcion);
	}

	TransitoExDef(TransitoEx codigo)
	{
		this->codigo = codigo;
	}
	
	TransitoExDef(int codigo)
	{
		this->codigo = (TransitoEx)codigo;
	}
	/*
		Imprime los codigos de error
	*/
	const char* ImprimirEx() {
		switch (this->codigo)
		{
		case Trafico:
			return "Usar via alterna";
			break;
		case Antialcoholica:
			return "Meterte entre las colonias";
			break;
		case Clima:
			return "Conduce con precaucion";
			break;
		case Choque:
			return "Prenda intermitente y prosiga con precaucion";
			break;
		case Bache:
			break;
		case LlantaPonchada:
			break;
		case Licencia:
			break;
		case FalloFrenos:
			break;
		case Levanton:
			break;
		case Bateria:
			break;
		case Gasolina:
			break;
		default:
			break;
		}
	}
};


struct DataVehicle {
	char name[50];
	char plate[50];
	VehicleBrands model;
	double price;
	DataVehicle(char name[50], char plate[50], VehicleBrands model, double price)
	{
		strcpy_s(this->name, name);
		strcpy_s(this->plate, plate);
		this->model = model;
		this->price = price;
	}
};

/*
void PrintInfo(DataVehicle &vehicle)
{
	cout << vehicle.name << endl;
	cout << vehicle.plate << endl;
	cout << vehicle.model << endl;
	cout << vehicle.price << endl;
}
*/
void main()
{
	//TransitoEx Enum
	//TransitoExDef Struct
	//DataVehicle Struct

	int opt;
	char des[_MAX_PATH];
	cout << "Que codigo de error sucedio" << endl;
	cin >> opt;
	cout << "Por que sucedio?" << endl;
	cin >> des;
	//TransitoEx* ex = new TransitoEx();
	//TransitoExDef *exDef = new TransitoExDef(opt);

	try
	{
		if (opt != 0) {
			throw TransitoExDef(opt, des);
		}
	}
	catch (TransitoExDef ex)
	{
		cerr << "EX: " << ex.codigo << " - " << ex.ImprimirEx() << " : " << ex.descripcion << endl;
	}
	catch (...)
	{
	}
	//DataVehicle m = DataVehicle((char*)"Prius",(char*)"505050",Toyota,454000);
	//PrintInfo(m);
	system("PAUSE");

}