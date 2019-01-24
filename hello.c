#include <mpi.h> 
#include <stdio.h>
int main(int argc, char *argv[]) {
    // set up MPI
    MPI_Init(&argc, &argv);
    // get communicator size and my rank
    MPI_Comm comm = MPI_COMM_WORLD;
    int p, rank;
    MPI_Comm_size(comm, &p);
    MPI_Comm_rank(comm, &rank);
/* code */
    printf("Hello from rank %d/%d.\n", rank, p);
    // finalize MPI
    MPI_Finalize();
return 0; }