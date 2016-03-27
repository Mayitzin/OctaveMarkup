# GNU Octave Markup

This project intends to create Markup support for [GNU Octave](https://www.gnu.org/software/octave/), based on the [Markup](http://de.mathworks.com/help/matlab/matlab_prog/marking-up-matlab-comments-for-publishing.html "MATLAB - Publishing Markup") defined by MATLAB, making both compatible.

This **Octave Markup** should:
- Be compatible with [MATLAB Markup for Publishing Code](http://de.mathworks.com/help/matlab/matlab_prog/publishing-matlab-code.html "Publishing MATLAB Code").
- Identify Markup and Help text as different between each other.
- Parse into PDF, LaTeX and HTML formats.
- Allow the customization of documentation styles.
- Be light and portable.

In the same sense, the **Octave Markup** could:
- Have both interactions directly through the Command Line or with an interactive fashion within Octave's GUI.
- Be able to generate further outputs like XHTML, ePub, RTF, Man pages, Qt Help, ODF, etc.

This project is from now under constant development.

References
----------

1. [MATLAB. Publishing Markup](http://de.mathworks.com/help/matlab/matlab_prog/marking-up-matlab-comments-for-publishing.html). An overview of MATLAB Publishing Markup with its options and a wide selection of examples.
2. [Publishing MATLAB Code](http://de.mathworks.com/help/matlab/matlab_prog/publishing-matlab-code.html). A short example using many Markup options within a formatted file, that generates a documentation of the code.
3. [MATLAB. Markup Help](http://www.mathworks.com/matlabcentral/answers/help/markup/). Very short MATLAB Markup help with the highlights of its functionality.
4. [MATLAB. Add Help for Your Program](http://de.mathworks.com/help/matlab/matlab_prog/add-help-for-your-program.html). The exaplanation of a **help text** in an M-file. This text appears when the keyword `help`  is typed before the name of a function in the Command Window.
5. [How is Octave different from Matlab?](http://wiki.octave.org/FAQ#How_is_Octave_different_from_Matlab.3F) The main differences between coding in Octave and in MATLAB, according to Octave Developers.
6. [MATLAB Programming/Differences between Octave and MATLAB](http://en.wikibooks.org/wiki/MATLAB_Programming/Differences_between_Octave_and_MATLAB). Highlights of the main differences with short examples and short notes.
7. [MATLAB. Understand Code Containing Suppressed Messages](http://en.mathworks.com/help/releases/R2015a/matlab/matlab_prog/check-code-for-errors-and-warnings.html#brx2q1o). Certain inline comments in MATLAB are aids for its Code Analyzer. These are not considered for any Markup Language application.
8. [Parse markup language (JSON, html, xml ...)](http://kb.refinepro.com/2011/10/parse-mark-up-language-json-html-xml.html). Tutorial to parse a JSON language and extract relevant information by following a six steps process.
9. [Alternative parsers](https://www.mediawiki.org/wiki/Alternative_parsers). Compilation of links, descriptions, and status reports of the various alternative parsers, which are able or intended to translate MediaWiki's text markup syntax into something else.
10. [Abstract Syntax Tree](https://en.wikipedia.org/wiki/Abstract_syntax_tree). Or just syntax tree, is a tree representation of the abstract syntactic structure of source code written in a programming language.
11. [A Parsing Tutorial from Nathan's University](http://nathansuniversity.com/pegs.html). A hands-on course to understand and use parsing techniques for the creation of a customized programming language.