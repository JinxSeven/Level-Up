#include <iostream>
#include <vector>

float find_uniq(const std::vector<float> &v)
{
    float idx0 = v[0];
    std::vector <float> one, two;
    for (int x = 0; x < v.size(); x++) {
        if (v[x] != idx0) {
            one.push_back(v[x]);
        } else {
            two.push_back(v[x]);
        }
        if (x > 3 && one.empty() == 0 && two.empty() == 0) {
            break;
        }
    }
    if (one.size() > two.size()) {
        return two[0];
    } 
    return one[0];
}

int main(int argc, char *argv[]) {
    std::vector<float> temp {999.666, 999.666, 999.666, 999.666, 999.666, 999, 999.666, 999.666, 999.666};
    std::cout << find_uniq(temp);
}