def DNA_strand(dna):
    newstr = ""
    for x in range(len(dna)):
        if dna[x] == "A":
            newstr += dna[x].replace("A", "T")
        if dna[x] == "T":
            newstr += dna[x].replace("T", "A")
        if dna[x] == "G":
            newstr += dna[x].replace("G", "C")
        if dna[x] == "C":
            newstr += dna[x].replace("C", "G")
        
    return newstr


print(DNA_strand("ATTGC"))