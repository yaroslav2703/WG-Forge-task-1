#include <iostream>

using namespace std;


int main() {
	
	int n;//количество блюд
	cin >> n;

	int *x = new int[n];//массив цен на все блюда

	
	
	for (int i = 0; i < n; i++) {
		cin >> x[i];

	}

	int q;//количество дней, в течение которых Вася планирует ходить в столовую
	cin >> q;

	int *m = new int[q];//количество денег на день

	for (int i = 0; i < q; i++) {
		cin >> m[i];
		m[i] *= 2;
		
	}

	int *kol = new int[q];// массив количеств блюд, которые Вася может купить в день

	for (int i = 0; i < q; i++) {
		kol[i] = 0;
	}

	for (int i=0; i < q; i++) {               //заполняем массив kol
		for (int j = 0; j < n; j++) {
			if (m[i] >= x[j]) {
				kol[i]++;
			}	
		}
	}
	for (int i = 0; i < q; i++) {  //вывод результата в консоль
		cout<<kol[i] << endl;
	}
	



	system("pause");
	delete [] x;
	delete [] m;
	delete [] kol;
	
}