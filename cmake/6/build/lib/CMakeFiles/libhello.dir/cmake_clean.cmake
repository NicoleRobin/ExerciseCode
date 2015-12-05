FILE(REMOVE_RECURSE
  "CMakeFiles/libhello.dir/hello.c.o"
  "libhello.pdb"
  "libhello.so"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang C)
  INCLUDE(CMakeFiles/libhello.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
