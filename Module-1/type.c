#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
 double distance = 12345678.987654321; //float এ এত বেশি দশমিক স্থান ধরা যায়না।


// হিসাব বা প্রিন্ট করার সময় সঠিক মান নাও পাওয়া যেতে পারে।
printf("distance: %f\n", distance);
}
