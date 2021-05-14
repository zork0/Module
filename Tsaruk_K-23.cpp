Царук Р. М. К-23
ВАРІАНТ 9

1.

Мова програмування C++ дає можливість перехоплювати Exception (об'єкт однойменного вбудованого класу) та відповідним чином їх обробляти.

Для перехоплень виключних ситуацій у C++ введено конструкцію try … catch:

try {
    // якщо тут виникло виключення з типом type, можливо з параметром (виняток можна згенерувати методом throw)
}
catch(type argument1)
{
    // то виконується цей код
}

Винятки стандартної бібліотеки. Наслідують від базового класу 

 bad_alloc
 bad_typeid
 bad_exception
 logic_failure
	 length_error
	 domain_error - відсутній доступ до елементу класу
	 out_of_range
	 invalid_argument
 runtime_error
	 overflow_error
	 range_error
 ...
 
 Спочатку порібно обробляти більш специфічні винятки, а тоді більш загальні (батьківські, вищих рівнів).
 
 
#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try { 
        throw std::overflow_error("text");
    }
    catch (std::overflow_error e) {
        cout << "overflow_error";
    }
    catch (std::exception e) {
        cout << "general";
    }
}

2.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


class Tester {
   public:
    bool test1(int x) {
        return true;
    }
};

class A {
   public:
    bool test2(int x) {
        return x > 0;
    }
};

class B {
   public:
    bool test3(int x) {
        return x*x > 10;
    }
};


int main() {
    Tester obj;
    
    int array[10];
    
    for(int i = 0 ; i < 11 ; i++) {
        array[i] = i - 5;
        cout << array[i] << endl;
    }
    
    for(int b = 0 ; b < 11 ; b++) {
        if (obj.test1(1)) {
            cout << array[b] << " іваівавіаі DE INTERNET  dddsfsdfsff";
        };
    }

    return 0;
} 

