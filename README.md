# Canu
# Language: C++
# Input: TXT
# Output: DIR
# Tested with: PluMA 1.1, GCC 4.8.4
# Dependencies: Canu 2.2

PluMA plugin to perform genome assembly with long reads, using Canu (Koren et al, 2017).

The plugin accepts as input a TXT file of parameters, one per line:
input FASTQ file
assembly method
genome size
type of data (i.e. nanopore-raw)

Assembly will be sent to the output directory specified by the user.


