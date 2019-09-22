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
	None = 0,
	Trafico = 1000,
	Tren, //1001,
	Choque = 2000,
	Manifestacion, // 2001
	Malfuncionamiento = 5000,
	Chocar, //5001
	SinGasolina //5002
	
};
struct TransitoExDef {
	TransitoEx codigo;
	char descripcion[_MAX_PATH];
	/*
		Constructor vacio
	*/
	TransitoExDef()
	{
		codigo = None;
	}
	/*
		Codigo - Valor a ser asignado
	*/
	TransitoExDef(TransitoEx codigo)
	{
		this->codigo = codigo;
	}
	/*
		codigo - Castea int a TransitoEx
	*/
	TransitoExDef(int codigo)
	{
		this->codigo = (TransitoEx)codigo;
	}

	/*
	*/
	TransitoExDef(int codigo, char descripcion[_MAX_PATH])
	{
		this->codigo = (TransitoEx)codigo;
		strcpy_s(this->descripcion, descripcion);
	}
	const char* ImprimirExcepcion()
	{
		switch (this->codigo)
		{
		case None:
			break;
		case Trafico:
			return "Posible embotellamiento";
		case Tren:
			return "Tren obstruyendo paso";
		case Choque:
			return "Choque adelante";
		case Manifestacion:
			break;
		case Malfuncionamiento:
			break;
		case Chocar:
			break;
		case SinGasolina:
			break;
		default:
			break;
		}
		return "";
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
	int opt;
	char des[_MAX_PATH];
	cout << "Que codigo sucedio?" << endl;
	cin >> opt;
	cout << "Que lo causo?" << endl;
	cin >> des;

	//TransitoExDef exDef = TransitoExDef(opt,des);

	try {
		//throw exDef.codigo;
		//throw exDef;
		throw TransitoExDef(opt, des);
	}
	catch (TransitoExDef ex)
	{
		cerr << "CE: " << ex.codigo << " - " << ex.ImprimirExcepcion() <<":"<< ex.descripcion << endl;
	}
	catch (TransitoEx ex)
	{
		cerr << "CE: " << ex << "Trafico" << endl;
	}
	catch (...)
	{
	}

	/*
	DataVehicle m = DataVehicle((char*)"Prius",(char*)"505050",Toyota,454000);
	PrintInfo(m);
	*/
	system("PAUSE");

}