#include <iostream>
#include<iomanip>
#include <string>
using namespace std;
//int main() {
//	system("chcp 1251");
//	srand(time(0));
//	int b[10][10];
//	int i, j, k, count = 0;
//	cout << " Введите число ";
//	cin >> k;
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			b[i][j] = rand() % 21 - 10;
//		}
//	}
//
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			cout << '[' << b[i][j] << ']' << " ";
//		}
//	}
//	cout << endl;
//
//	cout << " Элементы больше заданного: ";
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			if (b[i][j] > k)
//				cout << b[i][j] << " ";
//			count++;
//		}
//	}
//	cout << endl;
//	if (count == 0) {
//		cout << " Таких чисел нету ";
//	}
//
//}


//int main() {
//	system("chcp 1251");
//	int i, j, b[10][10], sum = 0;
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			b[i][j] = rand() % 101;
//		}
//	}
//
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			cout << '[' << b[i][j] << ']' << " ";
//		}
//	}
//	cout << endl;
//
//
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			if (j > i)
//				sum = sum + b[i][j];
//		}
//	}
//	cout << " Сумма элементов: " << sum;
//	return 0;
//}


//int main() {
//	system("chcp 1251");
//	int i, j, b[10][10], t;
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			b[i][j] = rand() % 101;
//		}
//	}
//
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			cout << '[' << b[i][j] << ']' << " ";
//		}
//	}
//	cout << endl;
//
//
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			b[i][j] = b[j][i];
//			b[j][i] = b[i][j];
//			cout << setw(4) << b[i][j] << " ";
//		}
//	}
//}



//int main() {
//	system("chcp 1251");
//	int b[10][10], s[10][10], d[10][10], i , j, k;
//
//	// Первая иатрица
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++) {
//			b[i][j] = rand() % 11;
//		}
//	}
//
//
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++) {
//			cout << '[' << b[i][j] << ']' << " ";
//		}
//		cout << endl;
//	}
//
//	cout << endl;
//	cout << endl;
//	cout << endl;
//	cout << endl;
//
//
//	// Вторая матрица
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++) {
//			s[i][j] = rand() % 11;
//		}
//	}
//
//
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++) {
//			cout << '[' << s[i][j] << ']' << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//	cout << endl;
//	cout << endl;
//
//
//	// Умножение матриц
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++) {
//			d[i][j] = 0;
//			for (k = 0; k < 3; k++) {
//				d[i][j] += b[i][k] * s[k][j];
//
//			}
//		}
//	}
//
//
//
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++) {
//			cout << '[' << d[i][j] << ']' << " ";
//		}
//	}
//
//}



//int main() {
//	system("chcp 1251");
//	int b[10][10], i, j, sum, maxstr, maxsum;
//
//
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			b[i][j] = rand() % 11;
//		}
//	}
//
//
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			cout << setw(4) << b[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//
//	cout << endl;
//	cout << endl;
//	cout << endl;
//
//	maxstr = 0;
//	sum = 0;
//	maxsum = 0;
//
//
//	for (i = 0; i < 10; i++) {
//		sum = 0;
//		for (j = 0; j < 10; j++) {
//			sum += b[i][j];
//		
//	}
//
//	cout << " Сумма строки " << i << " = " << sum;
//	
//	if (sum > maxsum) {
//		maxsum = sum;
//		maxstr = i;
//	}
//}
//	cout << " Строка : " << maxstr;
//}


//int main() {
//	system("chcp 1251");
//
//	int b[10][10], i, j, n, num, sumgoriz, sumvert, sumdiag , sumgoriz1 , sumvert2 , sumdiag3;
//	bool f;
//	cout << " Введите размер матрицы ";
//	cin >> n;
//
//
//	cout << " Введите элементы матрицы: ";
//	cout << endl;
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			cout << "a[" << i << "][" << j << "] = ";
//				cin >> b[i][j];
//		}
//	}
//
//	cout << endl;
//	cout << endl;
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			cout << setw(4) << b[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	sumgoriz = 0;
//	sumvert = 0;
//	sumdiag = 0;
//	sumgoriz1 = 0;
//	sumvert2 = 0;
//	sumdiag3 = 0;
//
//	// Горизонтальная 
//	f = true;
//	sumgoriz1 = 0;
//		for (j = 0; j < n; j++) {
//			sumgoriz1 += b[0][j];
//		}
//	for (i = 1; i < n; i++) {
//		sumgoriz = 0;
//		for (j = 0; j < n; j++) {
//			sumgoriz += b[i][j];
//		}
//		if (sumgoriz1 != sumgoriz) {
//			f = false;
//			cout << " Квадрат не магический ";
//			return 0;
//		}
//	}
//
//
//
//	// Вертикальная 
//	sumvert2 = 0;
//	for (i = 0; i < n; i++) {
//			sumvert2 += b[0][i];
//	}
//	f = true;
//	for (i = 1; i < n; i++) {
//		sumvert = 0;
//		for (j = 0; j < n; j++) {
//			sumvert += b[j][i];
//		}
//		if (sumvert != sumvert2){
//			f = false;
//		cout << " Квадрат не магический ";
//		return 0;
//		}
//	}
//
//
//	// Диагональ
//	sumdiag3 = 0;
//	for (i = 0; i < n; i++) {
//			sumdiag3 += b[i][i];
//	}
//	sumdiag = 0;
//	f = true;
//	for (i = 0; i < n; i++) {
//		sumdiag += b[i][n - 1 - i];
//	}
//
//			if (sumdiag != sumdiag3) {
//				f = false;
//				cout << " квадрат не магический ";
//				return 0;
//			}
//
//	cout << endl;
//
//
//	if (f == true) {
//	cout << " Матрица являеться магической ";
//	}
//}



//int main() {
//	system("chcp 1251");
//	int  i, j, num, n;
//	cout << " Введите количество слов ";
//	cin >> n;
//	string words[100];
//
//	for (i = 0; i < n; i++) {
//		cout << " Введите слова ";
//		cin >> words[i];
//	}
//
//
//	for (i = 0; i < n; i++) {
//		for (j = i + 1; j < n; j++) {
//			if (words[i] > words[j]) {
//				string temp = words[i];
//				words[i] = words[j];
//				words[j] = temp;
//			}
//		}
//	}
//
//
//	cout << " Слова по алфавиту: ";
//	for (i = 0; i < n; i++) {
//		cout << words[i] << " ";
//	}
//
//}

  



int main() {
    system("chcp 1251");
    string arr[100];
    int n;

    cout << "Ведите количество слов ";
    cin >> n;
    cout << " Введите слова";
    cout << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << endl;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // Проверка
        bool first = true;
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                first = false;
                break;
            }
        }

        if (first) {
            cout << arr[i] << " " << count << endl;
        }
    }

    return 0;
}