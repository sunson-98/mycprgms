struct student
{
	int no;
	struct student *next;
};
struct student *h[4];

int addnode_hash(int v);
int get_hash_key(int v);
void dumplist(void);
int add_atbegin(int v);
void get_count(void);
int delnode_byval(int v);





