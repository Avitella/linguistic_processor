#include <linguistic_processor/morphological_analysis/dict.h>

#include <boost/tokenizer.hpp>

#include <fstream>

int main() {
    std::ifstream dictFile("dict.opcorpora.txt");
    linguistic_processor::morphological_analysis::Dict dict(dictFile);

    std::cout << "Dict parsed, lemma count = " << dict.lemmas().size() << std::endl;

    std::string inputWord;
    while (std::cin >> inputWord) {
        std::cout << dict.findLemma(inputWord) << std::endl;
    }

    return 0;
}
