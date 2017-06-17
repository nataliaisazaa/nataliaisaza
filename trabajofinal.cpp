#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define reservar_memoria (Nodo *)malloc(sizeof(Nodo))

struct Nodo{
	int dato;
	Nodo *siguiente;
	Nodo *atras;
	Nodo *derecho;
	Nodo *izquierdo;
	Nodo *padre;
};

void generarNumerosAleatorios(Nodo *&, Nodo *&);
void insertarElementosLista(Nodo *&, Nodo *&, int);
void imprimirLista(Nodo *);
void ordenarElementosLista(Nodo *);
void Menu();
void desplegarListaPU(Nodo *);
void desplegarListaUP(Nodo *,Nodo *);
void desplegarCola(Nodo *);
void circularsimple(Nodo *);
void desplegarListacircularPU(Nodo *,Nodo *);
void desplegarListacircularUP(Nodo *,Nodo *);
void menuArbol();
void generarNumerosAleatoriosArbol(Nodo *&Arbol);
void insertarElementosArbol(Nodo *&Arbol, int n, int direccion, Nodo *Padre);
void Mostrar(int *a);
void InOrden(Nodo *Arbol, void (*func)(int*));
/*void postOrden(Nodo *Arbol, void (*func)(int*));
void preOrden(Nodo *Arbol, void (*func)(int*));*/
void ordenarElementosArbol(Nodo *&Arbol);

int main(){
    Nodo *Arbol = NULL;   // creado Arbol

    int n;  // numero de nodos del arbol
    int x; // elemento a insertar en cada nodo
	system("color f1");
	Menu();

	return 0;
}

void Menu(){
    Nodo *Arbol = NULL;   // creado Arbol
    int n;  // numero de nodos del arbol
    int x; // elemento a insertar en cada nodo
    Nodo *cabeza = NULL;
	Nodo *cola = NULL;
	int opcion1,opcion2;
    do{
        printf("\n********************************************|\n");
        printf("|--------------* PROYECTO FINAL *-------------|\n");
        printf("|-----------------*  MENU *-------------------|\n");
        printf("|*********************************************|\n");
        printf("| 1.GENERAR AUTOMATICAMENTE NUMERO            |\n");
        printf("| 2.COLA                                      |\n");
        printf("| 3.PILA                                      |\n");
        printf("| 4.LISTRA SIMPLE                             |\n");
        printf("| 5.LISTAS DOBLE                              |\n");
        printf("| 6.LISTA CIRCULAS SIMPLE                     |\n");
        printf("| 7.LISTA CIRCULAS DOBLE                      |\n");
        printf("| 8.ORDENAR POR ARBOL BINARIO BINARIO B       |\n");
        printf("| 9.ORDENAR POR ARBOL BINARIO BINARIO         |\n");
        printf("| 10.ORDENAR POR INSERCION                    |\n");
        printf("| 11.ORDENAR POR SELECCION                    |\n");
        printf("| 12.ORDENAR POR BURBUJA                      |\n");
        printf("| 0.Salir                                     |\n");
        printf("|*********************************************|\n");
        printf("Ingrese una opcion:");
        scanf("%d", &opcion1);
        switch(opcion1){
            case 1:
                system("cls");
                generarNumerosAleatorios(cabeza, cola);
                break;
            case 2:
                system("cls");
                desplegarCola(cabeza);
                break;
            case 3:
                imprimirLista(cabeza);
                break;
            case 4:
                system("cls");
                 do{
                                    printf("\n******************************************|\n");
                                    printf("|--------------* LISTA SIMPLE *-------------|\n");
                                    printf("|1.IMPRIMIENDO LISTA ORIGINAL               |\n");
                                    printf("|2.ORDENANDO LISTA                          |\n");
                                    printf("|3.IMPRIMIENDO LISTA ORDENADA               |\n");
                                    printf("|0:VOLVER MENU PRINCIPAL                    |\n");
                                    printf("|*******************************************|\n");
                                    scanf("%d", &opcion2);
                                    switch(opcion2){
                                        case 1:
                                            printf("Lista original\n");
                                            imprimirLista(cabeza);
                                            break;
                                        case 2:
                                            printf("Lista ordenada\n");
                                            ordenarElementosLista(cabeza);
                                            break;
                                        case 3:
                                            printf("Imprimiendo lista ordenada\n");
                                            imprimirLista(cabeza);
                                            break;
                                        case 0:system("cls");
                                            Menu();
                                        break;
                                        default: printf("\nNo valida la opcion...\n");
                                            break;
                                    }
                                }while(opcion2 != 0);
                        break;
            case 5:
                system("cls");
                    do{
                        printf("\n******************************************|\n");
                        printf("|--------------* LISTA DOBLES *-------------|\n");
                        printf("|1.IMPRIMIENDO LISTA ORIGINAL               |\n");
                        printf("|2.IMPRIMIR  LISTA DOBLE ASCENDENTE         |\n");
                        printf("|3.IMPRIMIR LISTA DOBLE DESCEN              |\n");
                        printf("|0:VOLVER MENU PRINCIPAL                    |\n");
                        printf("|*******************************************|\n");
                        scanf("%d", &opcion2);
                        switch(opcion2){
                            case 1:
                                imprimirLista(cabeza);
                                break;
                            case 2:
                                desplegarListaPU(cabeza);
                                break;
                            case 3:
                                desplegarListaUP(cabeza,cola);
                                break;
                            case 0:system("cls");
                                Menu();
                            break;
                            default: printf("\nNo valida la opcion...\n");
                                break;
                        }
                    }while(opcion2 != 0);
                break;
            case 6:
                system("cls");
                circularsimple(cabeza);

                break;
            case 7:
                system("cls");
                do{
                        printf("\n******************************************|\n");
                        printf("|----------* LISTA DOBLES CIRCULAR*---------|\n");
                        printf("|1.IMPRIMIENDO LISTA ORIGINAL               |\n");
                        printf("|2.IMPRIMIR  LISTA DOBLE ASCENDENTE         |\n");
                        printf("|3.IMPRIMIR LISTA DOBLE DESCEN              |\n");
                        printf("|0:VOLVER MENU PRINCIPAL                    |\n");
                        printf("|*******************************************|\n");
                        scanf("%d", &opcion2);
                        switch(opcion2){
                            case 1:
                                imprimirLista(cabeza);
                                break;
                            case 2:
                                desplegarListacircularPU(cabeza,cola);
                                break;
                            case 3:
                                desplegarListacircularUP(cabeza,cola);
                                break;
                            case 0:system("cls");
                                Menu();
                            break;
                            default: printf("\nNo valida la opcion...\n");
                                break;
                        }
                    }while(opcion2 != 0);
                break;
            case 8:
                do{
                        printf("\n|*******************************************|");
                        printf("\n|---------------*ARBOL BINARIO*-------------|");
                        printf("\n|1. GENERAR NUMEROS                         |");
                        printf("\n|2. IMPRIMIR INORDER                        |");
                        printf("\n|3. IMPRIMIR PREORDER                       |");
                        printf("\n|4. IMPRIMIR POSORDER                       |");
                        printf("\n|5. ORDENAR                                 |");
                        printf("\n|0. VOLVER MENU PRINCIPAL                   |");
                        printf("\n|*******************************************|");
                        printf("\n\nESCOJA UNA OPCION: ");
                        scanf("%d", &opcion2);
                        switch(opcion2){
                            case 1:
                                system("cls");
                                generarNumerosAleatoriosArbol(Arbol);
                                break;
                            case 2:
                                system("cls");
                                InOrden(Arbol, Mostrar);
                                break;
                            case 3:
                                /*preOrden(Arbol, Mostrar);
                                break;
                            case 4:
                                /*postOrden(Arbol, Mostrar);*/
                                break;
                            case 5:
                                system("cls");
                                ordenarElementosArbol(Arbol);
                                break;
                            case 0:system("cls");
                                Menu();
                            break;
                            default: printf("\nNo valida la opcion...\n");
                                break;
                        }
                    }while(opcion2 != 0);
                break;
            case 0: exit(0);
                break;
            default: printf("\nNo es una opcion valida, intentelo de nuevo\n");
                break;
        }
    }while(opcion2 != 0);



}

void generarNumerosAleatorios(Nodo *&cabeza, Nodo *&cola){
        int num, nDatos, i = 0;
	printf("Ingrese cantidad de numeros a generar: ");
	scanf("%d", &nDatos);
	srand(time(NULL));
	FILE *pf;
	pf = fopen("datos.txt","w");
	while(i < nDatos){
		num = (rand () % (1999998 + 1)) - 999999;
		insertarElementosLista(cabeza, cola, num);
		i += 1;
	}
    fclose(pf);
}

void insertarElementosLista(Nodo *&cabeza, Nodo *&cola, int n){
	Nodo *nuevo = reservar_memoria;
	nuevo -> dato = n;
	nuevo -> siguiente = NULL;
	if(cabeza == NULL){
		cabeza = nuevo;
	}else{
		cola -> siguiente = nuevo;
	}
	cola = nuevo;

}
void imprimirLista(Nodo *cabeza){
	if(cabeza != NULL){
		Nodo *actual = reservar_memoria;
		actual = cabeza;
		while(actual != NULL){
			printf("%d \n", actual -> dato);
			actual = actual -> siguiente;
		}
	}else{
		printf("\nLista Vacia\n");
	}
}
void ordenarElementosLista(Nodo *cabeza){
	if(cabeza != NULL){
		Nodo *p = reservar_memoria;
		Nodo *j = reservar_memoria;
		int aux;
		p = cabeza;
		while(p != NULL){
			j = p -> siguiente;
			while(j != NULL){
				if(p -> dato > j -> dato){
					aux = p -> dato;
					p -> dato = j -> dato;
					j -> dato = aux;
				}
				j = j -> siguiente;
			}
			p = p -> siguiente;
		}
	}else{
		printf("\nLista Vacia\n");
	}
}


void desplegarListaPU(Nodo *cabeza){
    Nodo* actual = reservar_memoria;
    actual = cabeza;
    if(cabeza != NULL){
        while(actual != NULL){
            printf("\n     %d", actual -> dato);
            actual = actual -> siguiente;
        }
    }else{
        printf("\n\nLA LISTA DOBLE SE ENCUENTRA VACIA");
    }
}

void desplegarListaUP(Nodo *cabeza, Nodo *cola){
    Nodo* actual = reservar_memoria;
    actual = cola;
    if(cabeza != NULL){
        while(actual != NULL){
            printf("\n     %d", actual -> dato);
            actual = actual -> atras;
        }
    }else{
        printf("\n\nLA LISTA DOBLE SE ENCUENTRA VACIA");
    }
}


void desplegarCola(Nodo *cabeza){
	if(cabeza != NULL){
		Nodo *actual = reservar_memoria;
		actual = cabeza;
		while(actual != NULL){
			printf("%d \n", actual -> dato);
			actual = actual -> siguiente;
		}
	}else{
		printf("\nLista Vacia\n");
	}
}
void circularsimple(Nodo *cabeza){
    Nodo *actual = reservar_memoria;
    actual = cabeza;
    if(cabeza != NULL){
        do{
            printf("\n     %d", actual -> dato);
            actual = actual -> siguiente;
        }while(actual != cabeza);
    }else{
        printf("\n\nLA LISTA SIMPLE CIRCULAR SE ENCUENTRA VACIA");
    }
}
void desplegarListacircularPU(Nodo *cabeza,Nodo *cola){
    Nodo* actual = reservar_memoria;
    actual = cabeza;
    if(cabeza != NULL){
        do{
            printf("\n     %d", actual -> dato);
            actual = actual -> siguiente;
        }while(actual != cabeza);
    }else{
        printf("\n\nLA LISTA DOBLE CIRCULAR SE ENCUENTRA VACIA");
    }
}

void desplegarListacircularUP(Nodo *cabeza,Nodo *cola){
    Nodo* actual = reservar_memoria;
    actual = cola;
    if(cabeza != NULL){
        do{
            printf("\n     %d", actual -> dato);
            actual = actual -> atras;
        }while(actual != cola);
    }else{
        printf("\n\nLA LISTA DOBLE CIRCULAR SE ENCUENTRA VACIA");
    }
}

               /******ARBOL BINARIOS******/

void generarNumerosAleatoriosArbol(Nodo *&Arbol){
    int direccion, n, nDatos;
	printf("INGRESE CANTIDAD DE DATOS: ");
	scanf("%d", &nDatos);
	srand(time(NULL));
	while(nDatos != 0){
        printf("\nINGRESAR A LA (1)IZQUIERDA O A LA (2)DERECHA: ");
        scanf("%d", &direccion);
        switch(direccion){
            case 1:
                n = (rand() % 99999) + 1;
                insertarElementosArbol(Arbol, n, direccion, NULL);
                nDatos -= 1;
                break;
            case 2:
                n = (rand() % 99999) + 1;
                insertarElementosArbol(Arbol, n, direccion, NULL);
                nDatos -= 1;
                break;
            default:
            printf("\nLO SIENTO, [%d] NO ES UNA OPCION VALIDA\n", direccion);
        }
    }
}
void insertarElementosArbol(Nodo *&Arbol, int n, int direccion, Nodo *Padre){
	int valorRaiz;
	if(Arbol == NULL){
		Nodo *nuevoNodo = reservar_memoria;
		nuevoNodo -> dato = n;
		nuevoNodo -> izquierdo = NULL;
		nuevoNodo -> derecho = NULL;
		nuevoNodo -> padre = Padre;
		Arbol = nuevoNodo;
	}else{
		valorRaiz = Arbol -> dato;
		if(direccion == 2){
			insertarElementosArbol(Arbol -> derecho, n, direccion, Arbol);
		}else if(direccion == 1){
			insertarElementosArbol(Arbol -> izquierdo, n, direccion, Arbol);
		}
	}
}
void Mostrar(int *a){
    printf("%d | ", *a);
}
void InOrden(Nodo *Arbol, void (*func)(int*)){
    if(Arbol->izquierdo){
        InOrden(Arbol->izquierdo, func);
    }
    func(&(Arbol->dato));
    if(Arbol->derecho){
        InOrden(Arbol->derecho, func);
    }
}
void preOrder(Nodo *Arbol, void (*func)(int*)){
    func(&Arbol->dato);
    if(Arbol->izquierdo){
        preOrder(Arbol->izquierdo, func);
    }
    if(Arbol->derecho){
        preOrder(Arbol->derecho, func);
    }
}
void postOrder(Nodo *Arbol, void (*func)(int*)){
    if(Arbol->izquierdo){
        postOrder(Arbol->izquierdo, func);
    }
    if(Arbol->derecho){
        postOrder(Arbol->derecho, func);
    }
    func(&Arbol->dato);
}
void ordenarElementosArbol(Nodo *&Arbol){

}
