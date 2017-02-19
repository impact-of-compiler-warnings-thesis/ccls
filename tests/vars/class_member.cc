class Foo {
  Foo* member;
};
/*
OUTPUT:
{
  "types": [{
      "id": 0,
      "usr": "c:@S@Foo",
      "short_name": "Foo",
      "qualified_name": "Foo",
      "definition": "tests/vars/class_member.cc:1:7",
      "vars": [0],
      "uses": ["tests/vars/class_member.cc:2:8"]
    }],
  "functions": [],
  "variables": [{
      "id": 0,
      "usr": "c:@S@Foo@FI@member",
      "short_name": "member",
      "qualified_name": "Foo::member",
      "declaration": "tests/vars/class_member.cc:2:8",
      "initializations": ["tests/vars/class_member.cc:2:8"],
      "variable_type": 0,
      "declaring_type": 0
    }]
}
*/