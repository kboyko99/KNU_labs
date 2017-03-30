//Бойко Катерина
// К-13

#ifndef F_H_INCLUDED
#define F_H_INCLUDED

const int max_arr_sz = 1000;

/**
 * Функція для отримання від користувача даних для подальшої роботи программи та запису їх у массив
 *
 * @param arr масив, у який відбуватиметься запис чисел, введених користувачем
 * @param i адреса змінної що позначає розмір массиву
 * @return нічого
 */
void arr_in(double arr[], int &i);

/**
 * Функція для друку на екрані массиву
 *
 * @param arr масив чисел, введених користувачем
 * @param a_sz розмір массиву
 * @return нічого
 */
void arr_out(double arr[], int a_sz);

/**
 * Функція для пошуку максимальних елементів та підрахунку середнього арфиметичного їх індексів у масиві
 *
 * @param arr масив, що буде проаналізовано
 * @param arr_sz розмір массиву
 * @param max_el адреса змінної шо позначає максимальний елемент массиву
 * @param average адреса змінної шо позначає середнє арифметичне індексів максимальних елементів массиву
 * @return нічого
 */
void analyze(double arr[], int arr_sz, double &max_el, double &average);

/**
 * Функція для друку на екрані результатів роботи программи
 *
 * @param max_el максимальний елемент массиву
 * @param average середнє арифметичне індексів максимальних елементів массиву
 * @return нічого
 */
void results(double max_el, double average);

#endif // F_H_INCLUDED
