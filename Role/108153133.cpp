# include <iostream>
using namespace std;

struct Role {
	char *name;
	int level;
	int hp;
	int atk;
	int dp;
	int np;
};

void dump_role(Role& role) {
	cout << "�W��:" << role.name << endl;
	cout << "����:" << role.level << endl;
	cout << "��q:" << role.hp << endl;
	cout << "�����O:" << role.atk << endl;
	cout << "���m�O:" << role.dp << endl;
	cout << "�ޯ��:" << role.np << endl; 
}

void test_role() {
	char name[] = "�j�Գ��k�L";
	struct Role role;
	
	role.name = name;
	role.level = 129;
	role.hp = 16532;
	role.atk = 114514;
	role.dp = 10;
	role.np = 100;
}

int main(int argc, char *argv[]) {
	test_role();
}
