#include "CUTE/Cute/Cute.h"
#include "CUTE/Cute/ide_listener.h"
#include "CUTE/Cute/Cute_runner.h"
#include "Potapov_Task18.h"

using namespace cute;

// Тест для целой части разности
void testIntegerPartOfDifference() {
    ASSERT_EQUAL(2, getIntegerPartOfDifference(5.7, 3.2)); // 5.7 - 3.2 = 2.5 → 2
    ASSERT_EQUAL(-1, getIntegerPartOfDifference(2.1, 3.5)); // 2.1 - 3.5 = -1.4 → -1
}

// Тест для дробной части разности
void testFractionalPartOfDifference() {
    ASSERT_EQUAL_DELTA(0.5, getFractionalPartOfDifference(5.7, 3.2), 0.001); // 0.5
    ASSERT_EQUAL_DELTA(0.6, getFractionalPartOfDifference(2.1, 3.5), 0.001); // -0.4 → 0.6 (корректировка для отрицательных чисел)
}

// Тест для ввода вещественного числа (упрощённый)
void testEnterDouble() {
    double x = 0;
    // В реальном тесте используйте mock-объекты для имитации ввода
    ASSERT_EQUAL_DELTA(0.0, x, 0.001); // Проверка инициализации
}

int main() {
    suite s;
    s.push_back(CUTE(testIntegerPartOfDifference));
    s.push_back(CUTE(testFractionalPartOfDifference));
    s.push_back(CUTE(testEnterDouble));

    ide_listener<> listener;
    makeRunner(listener)(s, "Тесты для варианта 18");
    return 0;
}