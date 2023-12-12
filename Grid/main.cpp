#include "Grid.cpp"

int main() {
    //тесты Шевелёва
    Grid<float> g(3, 2, 0.0f);
    assert(3 == g.get_y_size());
    assert(2 == g.get_x_size());
    g.print();

    using gsize_t = typename Grid<float>::size_type;

    for (gsize_t y_idx = 0; y_idx != g.get_y_size(); ++y_idx)
        for (gsize_t x_idx = 0; x_idx != g.get_x_size(); ++x_idx)
            assert(0.0f == g[y_idx][x_idx]);
    for (gsize_t y_idx = 0; y_idx != g.get_y_size(); ++y_idx)
        for (gsize_t x_idx = 0; x_idx != g.get_x_size(); ++x_idx)
            g[y_idx][x_idx] = 1.0f;

    for (gsize_t y_idx = 0; y_idx != g.get_y_size(); ++y_idx)
        for (gsize_t x_idx = 0; x_idx != g.get_x_size(); ++x_idx)
            assert(1.0f == g(y_idx, x_idx));


    //мои тесты
    float c = 0.0;
    for (gsize_t y_idx = 0; y_idx != g.get_y_size(); ++y_idx){
        for (gsize_t x_idx = 0; x_idx != g.get_x_size(); ++x_idx){
            g[y_idx][x_idx] += c;
            c++;
        }
    }
    g.print();

    //тесты Шевелёва
    nGrid<float, 3> const g3(2, 3, 4, 1.0f);
    assert(1.0f == g3(1, 1, 1));

    nGrid<float, 2> g2(2, 5, 2.0f);
    assert(2.0f == g2(1, 1));

    g2 = g3[1];
    assert(1.0f == g2(1, 1));

    //мои тесты
    c = 0.0f;
    nGrid<float, 3> h(5, 7, 3, 0.0f);
    for (gsize_t x = 0; x < 5; x++){
        for (gsize_t y = 0; y < 7; y++){
            for (gsize_t z = 0; z < 3; z++){
                h[x][y][z] += c;
                c++;
            }
        }
    }
    h.print();
    h[2].print();
    h[2][5].print();
    cout << h[2][5][1] << endl;
    cout << h(2, 5, 1) << endl;
    return 0;
}