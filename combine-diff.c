#include "object-store.h"
				    struct lline *newline, int lennew,
	if (newline == NULL)
		return newline;
		for (j = 1, newend = newline; j < lennew + 1; j++) {
				newline = lline->next;
	newend = newline;
		blob = read_object_file(oid, &type, size);
		abb = find_unique_abbrev(&elem->parent[i].oid,
	abb = find_unique_abbrev(&elem->oid, abbrev);
				if (convert_to_git(&the_index, elem->path, result, len, &buf, global_conv_flags_eol)) {
			if (oideq(&elem->parent[i].oid,
				  &elem->parent[j].oid)) {
			(opt->pickaxe_opts & DIFF_PICKAXE_KINDS_MASK)	||