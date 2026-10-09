# uau
from typing import Literal, Optional

class Tree:
    def __init__(self) -> None:
        self._pointer: Optional[int] = None         # Posicao na arvore
        self._node_list: list[dict] = []            # Guarda todos (dict)

    def node(
        self,
        element: str,
        inheritance_method: Literal["depth", "breadth"],
    ) -> dict[str, Any]:

        current_index = len(self._node_list)
        pointer = self._pointer

        if (current_index == 0):
            parent = None
        else:
            match inheritance_method:
                case "depth":
                    parent = pointer
                case "breadth":
                    assert pointer is not None
                    parent = self._node_list[pointer]["parent"]

        node_dict = {
            "parent": parent,
            "value": element,
            "children": [],
        }

        if (parent is not None and 0 <= parent < current_index):
            self._node_list[parent]["children"].append(current_index)

        self._node_list.append(node_dict)
        self._pointer = current_index
        return node_dict

def main():
    arvre = Tree()
    arvre.node("vertebrado", "depth")
    arvre.node("invertebrado", "breadth")
    arvre.node("")
    arvre.node("ave")
    arvre.node("mamifero")
