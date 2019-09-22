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
	SinExtintor,//1001
	LlantaBaja = 2000,
	SinLlantaRepuesto,
	NoRetrovisor = 4000,
	PerdidaCompleta = 5000,
	SinGasolina,//5001
	BateriaMuerta,//5002
};

struct TransitoExDef{
	TransitoEx codigos;
	char descripcion[_MAX_PATH];
	TransitoExDef()
	{
		this->codigos = None;
		strcpy_s(this->descripcion, "");
	}
	TransitoExDef(TransitoEx codigos)
	{
		this->codigos = codigos;
	}
	/*
		Codigos INT
		Descripcion MAX_PATH
	*/
	TransitoExDef(TransitoEx codigos, char descripcion[_MAX_PATH])
	{
		this->codigos = codigos;
		strcpy_s(this->descripcion, descripcion);
	}

	const char* PrintMessage()
	{
		switch (this->codigos)
		{
		case Trafico:
			return "Hay mucho transito";
		case SinExtintor:
			return "Hay un incendio y no estas preparado";
		case LlantaBaja:
			return "No puedes ir a altas velocidades";
		case SinLlantaRepuesto:
			return "Corres peligro";
				/*
		case NoRetrovisor:
			exDef = TransitoExDef(Trafico, (char*)"Hay mucho transito");
			break;
		case PerdidaCompleta:
			exDef = TransitoExDef(Trafico, (char*)"Hay mucho transito");
			break;
		case SinGasolina:
			break;
		case BateriaMuerta:
			break;
		default:
			break;
			*/
		}
		return "";
	}

};

struct DataVehicle {
	char name[50];
	int plate;
	VehicleBrands model;
	double price;
	DataVehicle(char name[50], int plate, VehicleBrands model, double price)
	{
		strcpy_s(this->name, name);
		this->plate = plate;
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
	int value;
	cout << "Ingrese valor" << endl;
	cin >> value;

	TransitoExDef exDef;
	

	bool llanta = true;
	bool trafico = false;

	try
	{
			throw new TransitoExDef((TransitoEx)value);
		
	}
	catch (TransitoExDef *ex)
	{
		cerr << ex->PrintMessage() << endl;
	}

	//DataVehicle *m = new DataVehicle((char*)"Prius",(char*)"505050",Toyota,454000);
	//PrintInfo(*m);
	system("PAUSE");
	
}