double* calc(int res-size , int max)
{
	double* p = new double[max];
	double* res= new double[res_size];
	
	delete [] p;
	return res;
}
int main()
{
	double* r = calc(100,1000);
	delete[] r;
}
