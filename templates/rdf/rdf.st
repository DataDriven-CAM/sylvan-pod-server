rdf(container-type, file-or-directory, mtime) ::= <<
@prefix rdf: \<http://www.w3.org/1999/02/22-rdf-syntax-ns#> .

\<>
    a \<http://www.w3.org/ns/ldp#<container-type>Container>, \<http://www.w3.org/ns/ldp#Container>, \<http://www.w3.org/ns/posix/stat#<file-or-directory>\> ;
    \<http://www.w3.org/ns/posix/stat#mtime> "<mtime>" ;
>>
