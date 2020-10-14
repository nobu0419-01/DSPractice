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
	cout << "名稱:" << role.name << endl;
	cout << "等級:" << role.level << endl;
	cout << "血量:" << role.hp << endl;
	cout << "攻擊力:" << role.atk << endl;
	cout << "防禦力:" << role.dp << endl;
	cout << "技能條:" << role.np << endl; 
}

void test_role() {
	char name[] = "古戰場逃兵";
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
