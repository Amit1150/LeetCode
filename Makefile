.PHONY: clean All

All:
	@echo "----------Building project:[ merge-sorted-array - Debug ]----------"
	@cd "merge-sorted-array" && "$(MAKE)" -f  "merge-sorted-array.mk"
clean:
	@echo "----------Cleaning project:[ merge-sorted-array - Debug ]----------"
	@cd "merge-sorted-array" && "$(MAKE)" -f  "merge-sorted-array.mk" clean
