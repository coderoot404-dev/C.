#include <stdio.h>

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int temp;  // Ek khali dabka (temporary variable) values swap karne ke liye

  // Loop ko array ke aadhay raste tak chalana hai
  for (int i = 0; i < 5 / 2; i++) {
    // Swapping logic
    temp = arr[i];        // Pehle value ko temp mein bacha liya
    arr[i] = arr[4 - i];  // Aakhri value ko utha kar shuru mein rakh diya
    arr[4 - i] = temp;
    for (int j = 0; j < 5; j++) {
      printf("%d ", arr[j]);  // Temp wali value ko aakhri jagah par rakh diya
    }

    // Ab array sach mein ulta ho chuka hai, print karke dekhte hain:
  }

  return 0;
}