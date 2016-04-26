.PHONY: clean All

All:
	@echo "----------Building project:[ String01 - Debug ]----------"
	@cd "String01" && "$(MAKE)" -f  "String01.mk"
clean:
	@echo "----------Cleaning project:[ String01 - Debug ]----------"
	@cd "String01" && "$(MAKE)" -f  "String01.mk" clean
