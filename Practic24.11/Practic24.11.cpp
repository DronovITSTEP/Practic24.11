#include <iostream>

using namespace std;

/*
// глобальная переменная
int num = 6;

void sum();
void show(int);

int showArr(int arr[]) {
    arr[6] = 5;
}*/

// программа "Успеваемость"

const int SIZE = 10;
int arr[SIZE]; // массив для оценок студента

//ввод оценок студента
void setGrade() {
    for (int i = 0; i < SIZE; i++) {
        cout << "Введите оценку №" << i+1 << ": ";
        cin >> arr[i];
    }
    cout << endl;
}

//вывод оценок студента
void printArr() {
    for (int i = 0; i < SIZE; i++) {
        cout << "Оценка студента №" << i + 1 
            << ": " << arr[i] << endl;
    }
}

//пересдача экзамена (замена оценки в массиве)
void retakeGrade() {
    int i;
    cout << "Введите номер оценки для изменения: ";
    cin >> i;
    cin >> arr[index];
    cout << "Оценка изменена" << endl;
}

// среднее по оценкам
bool scholarship() {
    float sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += arr[i];
    }
    return (sum / SIZE >= 10.7)? true:false;
}

void menu() {
    char c;
    do {
        cout << "Статистика по оценкам студента\n"
            << "--------------------------------\n";
        cout << "1 - Ввести оценки\n"
            << "2 - Вывести все оценки\n"
            << "3 - Пересдача экзамена\n"
            << "4 - Получение стипендии\n"
            << "0 - Exit\n"
            << "\nВаш выбор?\n";
        cin >> c;
        switch (c)
        {
        case '1':
            setGrade();
            break;
        case '2':
            printArr();
            break;
        case '3':
            retakeGrade();
            break;
        case '4':
            (scholarship())?
                cout << "Студент получает стипендию\n":
                cout << "Студент плохо учится. Остается без стипендии\n";
            break;
        case '0':
            exit(0);
            break;
        default:
            break;
        }
        system("cls");
    } while (c != '0');
}
int main()
{
    setlocale(LC_ALL, "");
    /*int x = 9, y = 54;
    cout << num << endl;
    sum();
    cout << num;

    const int arraySize = 100;
    int arr[arraySize], searchKey;

    // заносим значения в массив
    for (int i = 0; i < arraySize; i++) {
        arr[i] = 2 * i;
    }

    cout << "Please, enter the key: ";
    cin >> searchKey;

    // линейный поиск
    for (int i = 0; i < 100; i++) {
        if (searchKey == arr[i]) {
            cout << "The key was found in array\n";
            break;
        }
    }

    const int size = 10;
    int arr[size];
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    // сортировка выбором
    int k, x;
    for (int i = 0; i < size; i++) {
        k = i;
        x = arr[i];
        // цикл выбора наименьшего элемента
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < x) {
                k = j; // k - индекс наименьшего элемента
                x = arr[j];
            }
        }
            if (k != i) {
                arr[k] = arr[i];
                arr[i] = x;
            }
        }

    // сортировка пузырьком
    int x;
    for (int i = 0; i < size; i++) {
        for (int j = size - 1; j > i; j--) {
            if (arr[j - 1] > arr[j]) {
                x = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = x;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[j] < arr[j + 1]) {
                x = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = x;
            }
        }
    }

    // сортировка вставками
    int x, j;
    for (int i = 0; i < size; i++) {
        x = arr[i];
        // цикл для поиска места элемента в готовой последовательности
        for (j = i - 1; j >= 0 && arr[j] > x; j--) {
            // сдвиг элемента направо
            arr[j + 1] = arr[j];           
        }
        arr[j + 1] = x;
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;*/
    
    menu();
}

/*
// возвращаемый_тип_данных имя_функции (параметры){ тело функции }
void sum() {
    num++;
    cout << num << endl;
}

void show(int a) {
    cout << a << endl;
}*/