#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Student scores
    int scores[10] = {85, 72, 91, 64, 78, 55, 99, 70, 88, 61};

    int sum = 0;
    int highest = scores[0];
    int lowest = scores[0];
    int passed = 0;

    // Calculate statistics
    for (int i = 0; i < 10; i++)
    {
        sum += scores[i];

        if (scores[i] > highest)
            highest = scores[i];

        if (scores[i] < lowest)
            lowest = scores[i];

        if (scores[i] >= 70)
            passed++;
    }

    double average = (double)sum / 10;

    cout << "Teacher Grade Report\n";
    cout << "---------------------------\n";

    cout << "Student Scores: ";
    for (int i = 0; i < 10; i++)
        cout << scores[i] << " ";

    cout << "\n\nSum: " << sum << endl;
    cout << fixed << setprecision(2);
    cout << "Average: " << average << endl;
    cout << "Students Passed: " << passed << endl;
    cout << "Highest Score: " << highest << endl;
    cout << "Lowest Score: " << lowest << endl;

    return 0;
}
