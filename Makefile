.PHONY: clean All

All:
	@echo "----------Building project:[ Module_2016 - Debug ]----------"
	@cd "OOP\Module_2016" && "$(MAKE)" -f  "Module_2016.mk"
clean:
	@echo "----------Cleaning project:[ Module_2016 - Debug ]----------"
	@cd "OOP\Module_2016" && "$(MAKE)" -f  "Module_2016.mk" clean
