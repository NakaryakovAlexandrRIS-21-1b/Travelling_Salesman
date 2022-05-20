#include "Voy.H"
std::vector<int> s;
std::vector<std::vector<int>> res_matrix;

void mainRoad(int a, int b)
{
	if (s.size() == 0)
	{
		s.push_back(a);
		s.push_back(b);
	}
	else if ((b == s.front()) && b != 1) {
		std::vector<int> temp;
		int s_s = s.size();
		for (int i = 0; i < s_s; i++)
		{
			temp.push_back(s.back());
			s.pop_back();
		}
		s.push_back(a);
		int t_s = temp.size();
		for (int i = 0; i < t_s; i++)
		{
			s.push_back(temp.back());
			temp.pop_back();
		}
	}
	else if (a == s.back()) {
		s.push_back(b);
	}

}

String^ result() {
	int sum = 0;
	while (s.front() != 1) {
		std::vector<int> temp_mas;
		int temp;
		int n = s.size();
		for (int i = 0; i < n - 1; i++)
		{
			temp_mas.push_back(s.back());
			s.pop_back();
		}
		temp = s.back();
		s.pop_back();
		for (int i = 0; i < n - 1; i++)
		{
			s.push_back(temp_mas.back());
			temp_mas.pop_back();
		}
		s.push_back(temp);
	}
	int n = s.size();
	std::string temp;
	String^ sres = gcnew String(temp.c_str());
	for (int i = 0; i < n - 1; i++)
	{
		if (s[i] == s[i + 1]) {
			std::vector<int> temp_mas;
			for (int j = 0; j < i - 1; j++)
			{
				temp_mas.push_back(s.back());
				s.pop_back();
			}
			s.pop_back();
			for (int j = 0; j < i - 1; j++)
			{
				s.push_back(temp_mas.back());
				temp_mas.pop_back();
			}
			n--;
		}
	}
	if(s.back() != 1) s.push_back(1);
	for (int i = 0; i < s.size(); i++)
	{
		sres += static_cast<char>(s[i]);
		if ((s[i] == 1) && (i == 0)) sres += "->";
		if (s[i] != 1) sres += "->";
	}
	for (int i = 0; i < s.size()-1; i++)
	{
		sum += res_matrix[s[i] - 1][s[i + 1] - 1];
	}
	sres += " | " + Convert::ToString(sum);
	String^ ABC = sres;
	return ABC;
}

std::vector<std::vector<int>> matrix(int n)
{
	std::vector<std::vector<int>> a;
	for (int i = 0; i < n; i++)
	{
		std::vector<int> b;
		for (int j = 0; j < n; j++)
			b.push_back(-1);
		a.push_back(b);
	}
	return a;
}

std::vector<int> dj_(std::vector<std::vector<int>> a)
{
	std::vector<int> b;
	for (int i = 0; i < a.size(); i++) b.push_back(10000000);
	for (int i = 0; i < a.size(); i++)
		for (int j = 0; j < a.size(); j++)
			if ((a[i][j] <= b[j]) && (a[i][j] >= 0))
				b[j] = a[i][j];
	return b;

}

std::vector<std::vector<int>> stolb_reduct(std::vector<std::vector<int>> a, std::vector<int> b)
{
	for (int i = 0; i < a.size(); i++)
		for (int j = 0; j < a.size(); j++)
			a[j][i] -= b[i];
	return a;
}

std::vector<std::vector<int>> str_reduct(std::vector<std::vector<int>> a, std::vector<int> b)
{
	for (int i = 0; i < a.size(); i++)
		for (int j = 0; j < a.size(); j++)
			a[i][j] -= b[i];
	return a;
}

std::vector<int> di_(std::vector<std::vector<int>> a)
{
	std::vector<int> b;
	for (int i = 0; i < a.size(); i++)
	{
		int min = 10000000;
		for (int j = 0; j < a.size(); j++)
			if ((a[i][j] <= min) && (a[i][j] >= 0)) min = a[i][j];
		b.push_back(min);
	}
	return b;

}
void clear_s() {
	while (!(s.empty()))
	{
		s.pop_back();
	}
}
std::vector<std::vector<int>> new_line(int i, int j, int n, std::vector<std::vector<int>> a)
{
	a[i - 1][j - 1] = n;
	return a;
}

void print(std::vector<std::vector<int>> a)
{
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < a.size(); j++)
			std::cout << a[i][j] << '\t';
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

bool still_while(std::vector<int> a, std::vector<int> b)
{
	for (int i = 0; i < a.size(); i++)
		if (((a[i] > 0) && (a[i] != 10000000)) || ((b[i] > 0) && (b[i] != 10000000)))
			return true;
	return false;
}

int price(std::vector<std::vector<int>> a, int b, int c)
{
	int max1 = 0, max2 = 0;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[b][i] > max1) max1 = a[b][i];
		if (a[i][c] > max2) max2 = a[i][c];
	}
	int max = max1 + max2;
	return max;
}

int find(std::vector<int> a, int b)
{
	for (int i = 0; i < a.size(); i++)
		if (a[i] == b)
			return i;
}

std::vector<std::vector<int>> zero_count(std::vector<std::vector<int>> a)
{
	std::vector<int> p, str, stb;
	for (int j = 0; j < a.size(); j++)
		for (int i = 0; i < a.size(); i++)
			if (a[i][j] == 0)
			{
				p.push_back(price(a, i, j));
				str.push_back(i);
				stb.push_back(j);
			}
	int maxp = 0;
	for (int i = 0; i < p.size(); i++)
	{
		if (p[i] > maxp) maxp = p[i];
	}
	mainRoad(str[find(p, maxp)] + 1, stb[find(p, maxp)] + 1);
	for (int i = 0; i < a.size(); i++)
	{
		a[i][stb[find(p, maxp)]] = -1;
		a[str[find(p, maxp)]][i] = -1;
	}
	return a;
}

std::vector<std::vector<int>> graph( std::vector<std::vector<int>> a) {
	res_matrix = a;
	return a;
}

std::vector<std::vector<int>> new_vertex(std::vector<std::vector<int>> was) {
	int n = was.size();
	std::vector<std::vector<int>> now = matrix(was.size() + 1);
	std::vector<int> city_a, city_b, len;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			city_a.push_back(i);
			city_b.push_back(j);
			len.push_back(was[i][j]);
		}
	int road_n; std::cout << "Roads count:"; std::cin >> road_n;
	for (int i = 0; i < road_n; i++)
	{
		int city_c; std::cout << "Road " << n + 1 << "->"; std::cin >> city_c;
		int len_ab; std::cout << "Length " << n + 1 << "->" << city_c << ": "; std::cin >> len_ab;
		city_a.push_back(n);
		city_b.push_back(city_c - 1);
		len.push_back(len_ab);
		std::cout << "Length " << city_c << "->" << n + 1 << ": "; std::cin >> len_ab;
		len.push_back(len_ab);
		city_a.push_back(city_c - 1);
		city_b.push_back(n);
	}
	int o = pow(n, 2) + 2 * road_n;
	for (int i = 0; i < o; i++)
	{
		now = new_line(city_a[i] + 1, city_b[i] + 1, len[i], now);
	}
	res_matrix = now;
	return now;
}

std::vector<std::vector<int>> del_vertex(std::vector<std::vector<int>> was) {
	std::vector<std::vector<int>> nw = matrix(was.size() - 1);
	int vert; std::cout << "Delete vertex "; std::cin >> vert;
	int k = 0; int l = 0;
	for (int i = 0; i < nw.size(); i++)
	{
		if (k == vert - 1) k++;
		for (int j = 0; j < nw.size(); j++)
		{
			if (l == vert - 1) l++;
			nw[i][j] = was[k][l];
			l++;
		}
		k++; l = 0;
	}
	res_matrix = nw;
	return nw;
}

void reduct(std::vector<std::vector<int>> a) {
	std::vector<int> di = di_(a), dj = dj_(a);
	while (still_while(di, dj))
	{
		di = di_(a);
		a = str_reduct(a, di);
		dj = dj_(a);
		a = stolb_reduct(a, dj);
		a = zero_count(a);
		dj = dj_(a);
		di = di_(a);
	}
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < a.size(); j++)
		{
			if (a[i][j] == 0) mainRoad(i + 1, j + 1);
		}
	}
}
