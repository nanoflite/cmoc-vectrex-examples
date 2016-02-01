DEMOS = hello_world joystick rotating_rectangle zombie
clean_DEMOS=$(addprefix clean_,$(DEMOS))

all: $(DEMOS)

clean: $(clean_DEMOS)

.PHONY: do

$(DEMOS): do
	@ $(MAKE) -C $@

$(clean_DEMOS): do
	@ $(MAKE) -C $(patsubst clean_%,%,$@) clean
