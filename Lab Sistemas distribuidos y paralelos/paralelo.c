#include <mpi.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
 int lnom;
 char nombrepr[MPI_MAX_PROCESSOR_NAME];cat circu
 int pid, npr;
 int A = 2; // identificador y numero de proc.
 MPI_Init(&argc, &argv);
 MPI_Comm_size(MPI_COMM_WORLD, &npr);
 MPI_Comm_rank(MPI_COMM_WORLD, &pid);
 MPI_Get_processor_name(nombrepr, &lnom);
 A = A + 1;
 printf(" Hola Mundo! Thread %2d %2d ", pid, npr);
 MPI_Finalize();
 return 0;
} 