//��{�^�Bauto�B�R���\�[���A�E�g�v�b�g�B
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
//{}�ŏ�����
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
//�R���\�[���C���v�b�g
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
        std::cout << "����Ŕ����̉��i���^�C�v���āF";
        std::cin >> price;
        float tax = price * 1.1f;
        std::cout << "����ō��݂̉��i�F" << std::round(tax);
    }
    system("pause>0");
}
#endif
//���O���
#if 0
#include <iostream>
using namespace std;
namespace AKB {
    int numMembers = 0;
    void print() {
        cout << "�`�j�a" << numMembers << endl;
    }
}
namespace NOGIZAKA {
    int numMembers = 0;
    void print() {
        cout << "�T�؍�" << numMembers << endl;
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
//�֐��̃I�[�o�[���[�h�i�������Ⴄ�ƁA�������O�̊֐����`�ł���j
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
//�Q��(reference)
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

    //�|�C���^��
    //int num = 0;
    //int* p = &num;
    //*p = 555;
    //printf("%d\n", num);

    //�Q�Ɓ�
    //int& r = num;
    //r = 777;
    //std::cout << num << std::endl;

    system("pause>0");
}
#endif
//�z��for
#if 0
#include<iostream>
using namespace std;
int main()
{
    int arr[3]{ 10,20,30 };
    //�t�c�[��for
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
    //�z��for
    for (int elem : arr) {
        cout << elem << ' ';
    }
    cout << endl;

    system("pause>0");
}
#endif
//���I�m�ۂƉ��
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
    //������N���X
    string name;
    name = "Seinjogahara";
    name += " no ";
    name += "Shitagi";
    size_t len = name.length();
    cout << name << ' '<< len << "����" << endl;
    //name�̕�����̈ꕔ������������
    string name2 = "Hanekawa    ";
    int i = 0;
    for (char c : name2) {
        name[i] = c;
        i++;
    }
    cout << name << ' ' << len << "����" << endl;

    system("pause>0");
}
#endif
//�t�@�C���X�g���[��
#if 0
#include<iostream>
#include<fstream>
using namespace std;
void output() {
    ofstream fout("chara.txt");
    fout << "1 ���ǁX�ؗ�" << endl;
    fout << "2 ��ꃖ���Ђ���" << endl;
    fout << "3 �H�엃" << endl;
    fout << "4 ���㎛����" << endl;
    
    cout << "�t�@�C�����o�͂��܂����B" << endl;
}
void input() {
    cout << "�t�@�C������͂��܂��B" << endl;
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
//������X�g���[��
#if 0
#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    //�������ɏo��
    ostringstream strout;
    strout << 1 << ' ' << "�L�X�V���b�g";
    cout << strout.str() << endl;
    //�������������
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
//�q�[���[���N���X
class HERO {
    int Hp = 2;
    string Name = "������";
    string Waza = "���񂿂傤";
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
            cout << Name << "��" << enemy.name() << "��" << Waza << endl;
            enemy.damage();
            enemy.showStatus();
        }
    }
    void damage() {
        Hp--;
    }
    void showStatus() {
        if (Hp >= 2)cout << Name << "�͐����Ă���" << endl;
        else if (Hp >= 1) cout << Name << "�͕m��" << endl;
        else if (Hp >= 0) cout << Name << "�͎���" << endl;
        else cout << Name << "�͎���ł������[�́I" << endl;
    }
};
//�q�[���[�N���X���p�����ċ�̓I�ȃq�[���[������
class ANPAN_MAN : public HERO {
public:
    ANPAN_MAN() {
        setName("�A���p���}��");
        setWaza("�A���p���`�I");
    }
};
class ULTRA_MAN : public HERO {
public:
    ULTRA_MAN() {
        setName("�E���g���}��");
        setWaza("�X�y�V���[������");
    }
};
class KAMEN_RIDER : public HERO {
public:
    KAMEN_RIDER() {
        setName("���ʃ��C�_�[");
        setWaza("���C�_�[�L�b�N");
    }
};
//�G���g���[�|�C���g
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
