#include <iostream>
#include <string>
using namespace std;
void displayIngredients(string input1[], string input2[], int n)
{
  for(int i = 0; i < n; i++) {
     cout << i + 1 << ". " << input1[i]<<" "<<input2[i]<< "\n";
  }
}
int main() {
string ingredientNames[9] = {
        "Shiro powder (chickpea flour)",
        "Red onions (finely chopped)", 
        "Garlic cloves (minced)",
        "Fresh ginger (minced)",
        "Berbere spice blend",
        "Vegetable oil",
        "Tomato paste",
        "Water or vegetable broth",
        "Salt"
        };
string ingredientAmounts[9] = {
        "1 cup",
        "2 large",
        "4-5 cloves",
        "1 tablespoon",
        "2-3 tablespoons",
        "1/4 cup",
        "2 tablespoons",
        "3-4 cups",
        "1/2 spoon",
          };
displayIngredients(ingredientNames, ingredientAmounts, 9);
return 0;
}
