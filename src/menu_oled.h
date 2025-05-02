#define ITEMS 8  // Исправлено на реальное количество отображаемых элементов
#define VISIBLE_ITEMS 8  // Количество одновременно отображаемых пунктов
const char* menu_items[] = {
    " Parameter 0:",
    " Parameter 1:",
    " Parameter 2:",
    " Parameter 3:",
    " Parameter 4:",
    " Parameter 5:",
    " Parameter 6:",
    " Parameter 7:",
    " Parameter 8:",
    " Parameter 9:",
};
int8_t pointer = 0;
int8_t top_item = 0;  // Верхний видимый пункт списка
