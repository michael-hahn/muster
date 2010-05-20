#ifndef MUSTER_MPI_BINDINGS_H
#define MUSTER_MPI_BINDINGS_H
///
/// @file mpi_bindings.h
/// @brief <code>\#defines</code> for switching between MPI and PMPI bindings.
/// 
/// User of the API can <code>\#define</code> <code>MUSTER_USE_PMPI</code> to use the 
/// PMPI bindings instead of the plain MPI bindings.  Useful
/// for including this algorithm in tools.
/// 
/// This file should contain <code>\#defines</code> for all MPI calls used in 
/// the cluster library, and needs to be kept current.
///

#ifdef HAVE_CONFIG_H
#include "muster-config.h"
#endif // HAVE_CONFIG_H

// External header for MPI type information
#include "mpi_utils.h"

#ifdef MUSTER_USE_PMPI

#define CMPI_Allreduce PMPI_Allreduce
#define CMPI_Bcast     PMPI_Bcast
#define CMPI_Comm_rank PMPI_Comm_rank
#define CMPI_Comm_size PMPI_Comm_size
#define CMPI_Gather    PMPI_Gather
#define CMPI_Irecv     PMPI_Irecv
#define CMPI_Isend     PMPI_Isend
#define CMPI_Pack      PMPI_Pack
#define CMPI_Pack_size PMPI_Pack_size
#define CMPI_Reduce    PMPI_Reduce
#define CMPI_Unpack    PMPI_Unpack
#define CMPI_Waitsome  PMPI_Waitsome

#define cmpi_packed_size pmpi_packed_size

#else  // MUSTER_USE_PMPI

#define CMPI_Allreduce MPI_Allreduce
#define CMPI_Bcast     MPI_Bcast
#define CMPI_Comm_rank MPI_Comm_rank
#define CMPI_Comm_size MPI_Comm_size
#define CMPI_Gather    MPI_Gather
#define CMPI_Irecv     MPI_Irecv
#define CMPI_Isend     MPI_Isend
#define CMPI_Pack      MPI_Pack
#define CMPI_Pack_size MPI_Pack_size
#define CMPI_Reduce    MPI_Reduce
#define CMPI_Unpack    MPI_Unpack
#define CMPI_Waitsome  MPI_Waitsome

#define cmpi_packed_size mpi_packed_size

#endif // MUSTER_USE_PMPI



#endif // MUSTER_MPI_BINDINGS_H
