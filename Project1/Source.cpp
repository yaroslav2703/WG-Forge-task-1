#include <iostream>

using namespace std;


int main() {
	
	int n;//���������� ����
	cin >> n;

	int *x = new int[n];//������ ��� �� ��� �����

	
	
	for (int i = 0; i < n; i++) {
		cin >> x[i];

	}

	int q;//���������� ����, � ������� ������� ���� ��������� ������ � ��������
	cin >> q;

	int *m = new int[q];//���������� ����� �� ����

	for (int i = 0; i < q; i++) {
		cin >> m[i];
		m[i] *= 2;
		
	}

	int *kol = new int[q];// ������ ��������� ����, ������� ���� ����� ������ � ����

	for (int i = 0; i < q; i++) {
		kol[i] = 0;
	}

	for (int i=0; i < q; i++) {               //��������� ������ kol
		for (int j = 0; j < n; j++) {
			if (m[i] >= x[j]) {
				kol[i]++;
			}	
		}
	}
	for (int i = 0; i < q; i++) {  //����� ���������� � �������
		cout<<kol[i] << endl;
	}
	



	system("pause");
	delete [] x;
	delete [] m;
	delete [] kol;
	
}