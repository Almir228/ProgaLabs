**Structure**

Это определение структуры для динамического массива. Оно включает три поля:

"value" - указатель на массив целых чисел. Здесь будет храниться фактический массив данных динамического массива.

"size" - размер массива, т.е. количество элементов, которые могут быть сохранены в массиве.

"step" - шаг увеличения размера массива, т.е. количество элементов, на которые будет увеличиваться размер массива каждый раз, когда в нем заканчивается место.

**delete_array**

Эта функция delete_array() освобождает память, выделенную для динамического массива, переданного в качестве аргумента.

Функция принимает объект структуры DynamicArray в качестве аргумента arr.

Она вызывает оператор delete[] для указателя на массив arr.value, чтобы освободить выделенную под массив память.

После выполнения этой функции массив, который был передан как аргумент, будет удален из памяти.


**delete_ell**

Эта функция delete_ell() удаляет элемент из динамического массива по указанному индексу и изменяет его размер на 1.

Функция принимает два аргумента: указатель на объект структуры DynamicArray (arr) и индекс элемента, который нужно удалить (index).

В цикле от индекса элемента до предпоследнего элемента массива (arr->size-1), функция переносит каждый элемент массива влево на одну позицию, начиная со следующего элемента после удаляемого элемента. Таким образом, удаляемый элемент будет перезаписан следующим элементом, а остальные элементы будут сдвинуты на одну позицию влево.

Затем функция уменьшает размер массива на 1, уменьшая значение поля size на 1.

После выполнения этой функции элемент массива с заданным индексом будет удален, и размер массива будет уменьшен на 1.


**print_array**

Эта функция print_array() выводит на экран все элементы динамического массива, переданного в качестве аргумента.

Функция принимает объект структуры DynamicArray в качестве аргумента arr.

В цикле от 0 до размера массива (arr.size), функция выводит каждый элемент массива arr.value[i] на экран, разделяя их пробелами.

После окончания цикла функция выводит символ новой строки, чтобы перейти на следующую строку после вывода элементов массива.


**resize_x_2**

Эта функция resize_x_2() увеличивает размер динамического массива в два раза и копирует в него все элементы из старого массива.

Функция принимает объект структуры DynamicArray в качестве аргумента arr.

Сначала функция создает новый объект структуры DynamicArray с помощью конструктора по умолчанию. Затем функция вычисляет новый размер массива, умножив текущий размер на 2, и выделяет память для нового массива с помощью оператора new.

Затем функция копирует все элементы из старого массива arr.value в новый массив newArr.value, используя цикл for.

Далее функция освобождает память, выделенную для старого массива arr.value, используя оператор delete[].

Наконец, функция возвращает новый объект структуры DynamicArray с новым размером и копией всех элементов из старого массива.

После выполнения этой функции будет создан новый массив, в два раза больший, чем переданный массив, и все его элементы будут скопированы из старого массива.


**get_value**

Эта функция get_value() возвращает значение элемента динамического массива, находящегося по заданному индексу.

Функция принимает объект структуры DynamicArray в качестве аргумента arr и индекс элемента, значение которого нужно получить.

Сначала функция проверяет, находится ли индекс в допустимом диапазоне от 0 до arr.size-1 включительно. Если да, то функция возвращает значение элемента массива, находящегося по указанному индексу arr.value[index]. Если индекс находится за пределами диапазона, то функция возвращает -1.

Эта функция полезна для получения значения элемента массива без необходимости изменять его или передавать его в качестве аргумента другой функции.


**push_back**

Эта функция resize_const() увеличивает размер динамического массива на заданную константу step и копирует в него все элементы из старого массива.

Функция принимает объект структуры DynamicArray в качестве аргумента arr.

Сначала функция создает новый объект структуры DynamicArray с помощью конструктора по умолчанию. Затем функция вычисляет новый размер массива, добавляя к текущему размеру значение поля step, и выделяет память для нового массива с помощью оператора new.

Затем функция копирует все элементы из старого массива arr.value в новый массив newArr.value, используя цикл for.

Далее функция освобождает память, выделенную для старого массива arr.value, используя оператор delete[].

Наконец, функция возвращает новый объект структуры DynamicArray с новым размером, копией всех элементов из старого массива и значением поля step, равным значению поля step в старом массиве.

После выполнения этой функции будет создан новый массив, увеличенный на заданную константу, и все его элементы будут скопированы из старого массива.


**set_value**

Эта функция set_value() устанавливает значение элемента динамического массива, находящегося по заданному индексу, равным заданному значению value. Если индекс находится за пределами диапазона текущего размера массива, функция выводит сообщение об ошибке.

Функция принимает указатель на объект структуры DynamicArray в качестве аргумента arr, индекс элемента, значение которого нужно изменить, в качестве аргумента index, и значение, на которое нужно изменить элемент, в качестве аргумента value.

Сначала функция проверяет, находится ли индекс в допустимом диапазоне от 0 до arr->size-1 включительно. Если да, то функция устанавливает значение элемента массива, находящегося по указанному индексу arr->value[index], равным value.

Если индекс равен размеру массива arr->size, то функция вызывает функцию push_back(), чтобы добавить новый элемент со значением value в конец массива.

Если индекс находится за пределами диапазона, то функция выводит сообщение об ошибке.

Таким образом, эта функция позволяет изменять значение элементов динамического массива, а также добавлять новые элементы в конец массива при необходимости.


**fill_array**

Эта функция fill_array() создает динамический массив и возвращает его в виде структуры DynamicArray.

Она принимает два аргумента: size и step. Аргумент size определяет начальный размер массива, а аргумент step - на сколько элементов будет увеличиваться массив каждый раз, когда в нем заканчивается место.

В первой строке функция создает объект структуры DynamicArray с помощью фигурных скобок и инициализирует его значениями по умолчанию.

Затем она выделяет память для массива целых чисел размера size, используя оператор new, и присваивает этот указатель полю value созданного объекта структуры DynamicArray.

Далее функция устанавливает значение size и step в соответствующие поля созданного объекта структуры DynamicArray.

В конце функция возвращает объект структуры DynamicArray с инициализированными полями value, size и step.


**resize_const**

Эта функция resize_const() увеличивает размер динамического массива на заданную константу step и копирует в него все элементы из старого массива.

Функция принимает объект структуры DynamicArray в качестве аргумента arr.

Сначала функция создает новый объект структуры DynamicArray с помощью конструктора по умолчанию. Затем функция вычисляет новый размер массива, добавляя к текущему размеру значение поля step, и выделяет память для нового массива с помощью оператора new.

Затем функция копирует все элементы из старого массива arr.value в новый массив newArr.value, используя цикл for.

Далее функция освобождает память, выделенную для старого массива arr.value, используя оператор delete[].

Наконец, функция возвращает новый объект структуры DynamicArray с новым размером, копией всех элементов из старого массива и значением поля step, равным значению поля step в старом массиве.

После выполнения этой функции будет создан новый массив, увеличенный на заданную константу, и все его элементы будут скопированы из старого массива.




