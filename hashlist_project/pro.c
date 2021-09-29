#include<stdio.h>
#include<string.h>

 struct hash
{
	char lane[128];
	int no;
};
struct hash h[64];

int cmp(char *loc)
{
	int j = 0, i = 0;
	for(j = 0; i = strcmp(h[j].lane, loc); j++)
	{
		if(i == 0 || strlen(h[j].lane) == 0)
			return 0;
	}

}

int add_node(int v, char pos[32])
{
	int n;
	n = cmp(pos);

	strcpy(h[n].lane, pos);
	h[n].no = v;
	return 0;
}

void dumplist(void)
{
	int i = 0;
	for(i = 0; strlen(h[i].lane) != 0; i++)
	{
		printf("\n\n%d villa is in %s lane\n", h[i].no, h[i].lane);
	}
}

int main()
{
	 dumplist();
	 return 0;
	add_node(110,"2ll");
	add_node(65,"2rl");
	add_node(64,"2rl");
	add_node(63,"2rl");
	add_node(62,"2rl");
	add_node(69,"2rl");
	add_node(71,"2ll");
	add_node(108,"2ll");
	add_node(65,"1ll");
	add_node(65,"1lr");
	add_node(65,"2lr");
	return 0;
}

	







