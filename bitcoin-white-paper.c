#include <stdio.h>
#include <math.h>

double AttackerSuccessProbability(double q, int z);
void dispASP(double q, int step, int end);

int main()
{
  double q = 0.1;
  int step = 1;
  int end = 10;
  dispASP(q, step, end);
  printf("\n\n===============================\n\n");
  q = 0.3;
  step = 5;
  end = 50;
  dispASP(q, step, end);
  printf("\n\n===============================\n\n");
  double aSp;
  int z;
  double qValues[9];
  int zValues[] = { 5, 8, 11, 15, 24, 41, 89, 340 };
  for(int i = 0; i < 8; i++)
  {
    qValues[i] = (double)(10 + 5 * i)/100;
    q = qValues[i];
    z = zValues[i];
    aSp = AttackerSuccessProbability(q, z);
    printf("q = %.2f\tz = %d\tP = %.4f < 0.001\n",
	   q, z, aSp);
  }
  
  return 0;
}

double AttackerSuccessProbability(double q, int z)
{
 double p = 1.0 - q;
 double lambda = z * (q / p);
 double sum = 1.0;
 int i, k;
 for (k = 0; k <= z; k++)
 {
 double poisson = exp(-lambda);
 for (i = 1; i <= k; i++)
 poisson *= lambda / i;
 sum -= poisson * (1 - pow(q / p, z - k));
 }
 return sum;
}

void dispASP(double q, int step, int end)
{
  double aSp;
  printf("q = %.1f\n", q);
  for(int z = 0; z < end + 1; z += step)
  {
    aSp = AttackerSuccessProbability(q, z);
    printf("z = %d\tP = %.7f\n", z, aSp);
  }
}

/*
  q = 0.1
  z=0 P=1.0000000
  z=1 P=0.2045873
  z=2 P=0.0509779
  z=3 P=0.0131722
  z=4 P=0.0034552
  z=5 P=0.0009137
  z=6 P=0.0002428
  z=7 P=0.0000647
  z=8 P=0.0000173
  z=9 P=0.0000046
  z=10 P=0.0000012

  q=0.3
  z=0 P=1.0000000
  z=5 P=0.1773523
  z=10 P=0.0416605
  z=15 P=0.0101008
  z=20 P=0.0024804
  z=25 P=0.0006132
  z=30 P=0.0001522
  z=35 P=0.0000379
  z=40 P=0.0000095
  z=45 P=0.0000024
  z=50 P=0.0000006

  q=0.10 z=5
  q=0.15 z=8
  q=0.20 z=11
  q=0.25 z=15
  q=0.30 z=24
  q=0.35 z=41
  q=0.40 z=89
  q=0.45 z=340
 */
