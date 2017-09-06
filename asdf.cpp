#include<iostream>
#include <string> // string, stoi
#include <cctype> // isdigit
#include <cstdlib> // atoi

/*
Bayron Carrillo
Carlos Fuentes
Javier Lau
*/

using namespace std;
//bool esNumerico(string);

int area (int num){
	int a,b,l,h,peri,m,n,o,B,ar;
	int pi=3.14;

	
	switch(num)
          {
	
	case 1:
		//Cuadrado	
		cout<<":::::::::Cuadrado:::::::::\n";
		cout<<"ingresa el largo de los lados\n";
		cin>>a;
		ar=a*a;
		peri=a*4;
		cout <<"area= "<<ar<<"\n";
		cout <<"perimetro= "<<peri<<"\n";
			
		break;
	case 2:
		//rectanguo	
		cout<<":::::::::Rectangulo:::::::::\n";
		cout<<"ingresa total de la base\n";
		cin>>b;
		cout<<"ingresa total de la Altura\n";
		cin>>h;
		ar=b*h;
		peri=(2*b)+(2*h);
		cout <<"area= "<<ar<<"\n";
		cout <<"perimetro= "<<peri<<"\n";
		
		break;
	case 3:
	
		//Triangulo	
		cout<<":::::::::Triangulo:::::::::\n";
		cout<<"ingresa total de la base\n";
		cin>>b;
		cout<<"ingresa total de la Altura\n";
		cin>>h;
		cout<<"ingresa lado 1\n";
		cin>>l;
		cout<<"ingresa lado 2\n";
		cin>>m;
		cout<<"ingresa lado 3\n";
		cin>>n;
		
		ar=(b*h)/2;
		peri=l+m+n;

		cout <<"area= "<<ar<<"\n";
		cout <<"perimetro= "<<peri<<"\n";

		break;
	case 4:
		//circulo
		cout<<":::::::::Circulo:::::::::\n";	
		cout<<"ingresa radio\n";
		cin>>b;
		
		ar=(b*b)*pi;
		peri=2*pi*b;
		cout <<"area= "<<ar<<"\n";
		cout <<"perimetro= "<<peri<<"\n";
		break;
	case 5:
		//rombo	
		cout<<":::::::::Rombo:::::::::\n";
		cout<<"ingrese lado\n";
		cin>>b;
		cout<<"ingrese Diagonal menor\n";
		cin>>h;
		cout<<"ingrese Diagonal mayor \n";
		cin>>l;
		
		ar=(l*h)/2;
		peri=b*4;
		cout <<"area= "<<ar<<"\n";
		cout <<"perimetro= "<<peri<<"\n";


		break;
	case 6:

		//Romboide
		cout<<":::::::::Romboide:::::::::\n";	
		cout<<"ingrese base\n";
		cin>>b;
		cout<<"ingrese Altura\n";
		cin>>h;
		
		ar=(b*h);
		peri=(2*b)+(2*h);
		cout <<"area= "<<ar<<"\n";
		cout <<"perimetro= "<<peri<<"\n";

		break;
	case 7:

		//Trapecho	
		cout<<":::::::::Trapecio:::::::::\n";
		cout<<"ingrese lado 1\n";
		cin>>l;
		cout<<"ingrese lado 2\n";
		cin>>m;
		cout<<"ingrese lado 3\n";
		cin>>n;
		cout<<"ingrese lado 4\n";
		cin>>o;
		cout<<"ingrese base mayor\n";
		cin>>b;
		cout<<"ingrese base menor\n";
		cin>>B;
		cout<<"ingrese Altura\n";
		cin>>h;
		
		ar=((B+b)*h)/2;
		peri=l+m+n+o;
		cout <<"area= "<<ar<<"\n";
		cout <<"perimetro= "<<peri<<"\n";

		break;

		}


}

bool esNumerico(string linea) 
    {
       bool P = true;
       int longitud = linea.size();
     
       if (longitud == 0) { // Cuando el usuario pulsa ENTER
          P = false;
       } else if ((longitud == 1) &&!(isdigit(linea[0]))) {
          P = false;
       } else {
          int i;
          if ((linea[0] == '+' )|| (linea[0] == '-')){
          	i = 1;
		  }
         else{
         	i = 0;
		 }
     
          while (i < longitud) {
             if (!isdigit(linea[i])) {
                P = false;
                break;
             }
             i++;
          }
       }
     
       return P;
    }
    
int main (){
	
	string linea;
	int num;
    bool repite = true;
	
	do{
	
	cout <<"\t=========> Tabla <==========\n\n\n";
	cout <<"ingrese el numero de la figura Gemotrica que desea calcular por el teclado.\n";
	cout<<"1.)Cuadrado\n";
	cout<<"2.)Rectangulo\n";
	cout<<"3.)Triangulo\n";
	cout<<"4.)Circulo\n";
	cout<<"5.)Rombo\n";
	cout<<"6.)Romboide\n";
	cout<<"7.)Trapecho\n";
	cout<<"8.)salir\n";
	getline(cin, linea);
	
          if (esNumerico(linea)) {
             repite = false;
          } else {
             cout << "No ha ingresado un entero. Intente nuevamente" << endl;
          }
	
}

		while (repite);
      	    num = atoi(linea.c_str());
     		area(num);
            cout<<("Gracias! Hasta luego \n\n");
	
	cin.get();	
	return 0;
}

