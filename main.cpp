//基本型。auto。コンソールアウトプット。
#if 0
#include<iostream>
int main()
{
    {//C
        int age = 18;
        float weight = 5.1f;
        double height = 165.2;
        char gender = 'F';
        const char* name = "Hitagi";
        printf("%d ", age);
        printf("%f ", weight);
        printf("%lf ", height);
        printf("%c ", gender);
        printf("%s\n", name);
    }
    {//C++
        auto age = 18;
        auto weight = 5.1f;
        auto height = 165.2;
        auto gender = 'F';
        auto name = "Hitagi";
        std::cout << age << ' ';
        std::cout << weight << ' ' << height << ' ';
        std::cout << gender << ' ';
        std::cout << name << std::endl;
    }
    system("pause>0");
}
#endif
//{}で初期化
#if 0
#include<iostream>
int main()
{       
    struct POS {
       int x, y;
    };

    {//c
        int i = 0;
        int arr[3] = { 0,0,0 };
        struct POS a = { 0,0 };
    }
    {//c++
        int i{1};
        int arr[3]{2,3,4};
        POS a{5,6};
        std::cout << i << std::endl;
        std::cout << arr[0] << ' ' << arr[1] << ' ' << arr[2] << std::endl;
        std::cout << a.x << ' ' << a.y << std::endl;
    }
    system("pause>0");
}
#endif
//コンソールインプット
#if 0
#include <iostream>
int main()
{
    {//c
        int price;
        scanf("%d", &price);
        printf("%d\n", price);
    }
    {//c++
        int price;
        std::cout << "消費税抜きの価格をタイプして：";
        std::cin >> price;
        float tax = price * 1.1f;
        std::cout << "消費税込みの価格：" << std::round(tax);
    }
    system("pause>0");
}
#endif
//名前空間
#if 0
#include <iostream>
using namespace std;
namespace AKB {
    int numMembers = 0;
    void print() {
        cout << "ＡＫＢ" << numMembers << endl;
    }
}
namespace NOGIZAKA {
    int numMembers = 0;
    void print() {
        cout << "乃木坂" << numMembers << endl;
    }
}
int main()
{
    AKB::numMembers = 48;
    AKB::print();
    NOGIZAKA::numMembers = 46;
    NOGIZAKA::print();

    system("pause>0");
}
#endif
//関数のオーバーロード（引数が違うと、同じ名前の関数を定義できる）
#if 0
#include<iostream>
using namespace std;
void print(int v) {
    cout << "int:" << v << endl;
}
void print(float v) {
    cout << "float:" << v << endl;
}
void print(double v) {
    cout << "double:" << v << endl;
}
int main() 
{
    print(5);
    print(5.0f);
    print(5.0);

    system("pause>0");
}
#endif
//参照(reference)
#if 0
#include<iostream>
using namespace std;
struct POS { int x, y; };
void print(POS* p) {
    cout << p->x << ' ' << p->y << endl;
}
void init(POS& r) {
    r.x = 0;
    r.y = 0;
}
void print(const POS& r) {
    cout << r.x << ' ' << r.y << endl;
}
int main()
{
    POS a{ 10,20 };
    print(&a);
    init(a);
    print(a);

    //ポインタ＊
    //int num = 0;
    //int* p = &num;
    //*p = 555;
    //printf("%d\n", num);

    //参照＆
    //int& r = num;
    //r = 777;
    //std::cout << num << std::endl;

    system("pause>0");
}
#endif
//配列for
#if 0
#include<iostream>
using namespace std;
int main()
{
    int arr[3]{ 10,20,30 };
    //フツーのfor
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
    //配列for
    for (int elem : arr) {
        cout << elem << ' ';
    }
    cout << endl;

    system("pause>0");
}
#endif
//動的確保と解放
#if 0
#include<iostream>
#include<crtdbg.h>
using namespace std;
int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
    {//c
        int* p = (int*)malloc(sizeof(int));
        *p = 0;
        printf("%d\n", *p);
        free(p);

        int* a = (int*)malloc(sizeof(int) * 3);
        for (int i = 0; i < 3; i++)a[i] = (i + 1);
        for (int i = 0; i < 3; i++)printf("%d ", a[i]);
        printf("\n\n");
        free(a);
    }
    {//c++
        int* p = new int{0};
        cout << *p << endl;
        delete p;

        int* a = new int[3] {1,2,3};
        for (int i = 0; i < 3; i++)cout << a[i] << ' ';
        cout << endl;
        delete[] a;
    }

    system("pause>0");
}
#endif
//string
#if 0
#include<iostream>
using namespace std;
int main()
{
    //文字列クラス
    string name;
    name = "Seinjogahara";
    name += " no ";
    name += "Shitagi";
    size_t len = name.length();
    cout << name << ' '<< len << "文字" << endl;
    //nameの文字列の一部を書き換える
    string name2 = "Hanekawa    ";
    int i = 0;
    for (char c : name2) {
        name[i] = c;
        i++;
    }
    cout << name << ' ' << len << "文字" << endl;

    system("pause>0");
}
#endif
//ファイルストリーム
#if 0
#include<iostream>
#include<fstream>
using namespace std;
void output() {
    ofstream fout("chara.txt");
    fout << "1 阿良々木暦" << endl;
    fout << "2 戦場ヶ原ひたぎ" << endl;
    fout << "3 羽川翼" << endl;
    fout << "4 八九寺迷い" << endl;
    
    cout << "ファイルを出力しました。" << endl;
}
void input() {
    cout << "ファイルを入力します。" << endl;
    ifstream fin("chara.txt");

    int no;
    string name;
    fin >> no >> name;
    while (!fin.eof()) {
        cout << no << ' ' << name << endl;
        fin >> no >> name;
    }
}
int main()
{
    output();
    input();

    system("pause>0");
}
#endif
//文字列ストリーム
#if 0
#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    //メモリに出力
    ostringstream strout;
    strout << 1 << ' ' << "キスショット";
    cout << strout.str() << endl;
    //メモリから入力
    istringstream strin(strout.str());
    int no;
    string name;
    strin >> no;
    strin >> name;
    cout << no << ' ' << name;

    system("pause>0");
}
#endif
//class
#if 0
#include<iostream>
using namespace std;
//ヒーロー基底クラス
class HERO {
    int Hp = 2;
    string Name = "名無し";
    string Waza = "かんちょう";
public:
    void setName(string name) {
        Name = name;
    }
    void setWaza(string waza) {
        Waza = waza;
    }
    string name() {
        return Name;
    }
    void attack(HERO& enemy) {
        if (Hp > 0) {
            cout << Name << "が" << enemy.name() << "に" << Waza << endl;
            enemy.damage();
            enemy.showStatus();
        }
    }
    void damage() {
        Hp--;
    }
    void showStatus() {
        if (Hp >= 2)cout << Name << "は生きている" << endl;
        else if (Hp >= 1) cout << Name << "は瀕死" << endl;
        else if (Hp >= 0) cout << Name << "は死んだ" << endl;
        else cout << Name << "は死んでるっちゅーの！" << endl;
    }
};
//ヒーロークラスを継承して具体的なヒーローをつくる
class ANPAN_MAN : public HERO {
public:
    ANPAN_MAN() {
        setName("アンパンマン");
        setWaza("アンパンチ！");
    }
};
class ULTRA_MAN : public HERO {
public:
    ULTRA_MAN() {
        setName("ウルトラマン");
        setWaza("スペシューム光線");
    }
};
class KAMEN_RIDER : public HERO {
public:
    KAMEN_RIDER() {
        setName("仮面ライダー");
        setWaza("ライダーキック");
    }
};
//エントリーポイント
int main()
{
    ANPAN_MAN anpanMan;
    ULTRA_MAN ultraMan;
    KAMEN_RIDER kamenRider;

    kamenRider.attack(ultraMan);
    anpanMan.attack(ultraMan);
    ultraMan.attack(anpanMan);
    anpanMan.attack(ultraMan);

    system("pause>0");
}
#endif
